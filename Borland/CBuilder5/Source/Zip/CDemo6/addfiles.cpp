#include <vcl.h>
#pragma hdrstop

#include "AddFiles.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TAddFile *AddFile;

bool InMouseClick;

//---------------------------------------------------------------------------
void __fastcall TAddFile::OKButClick( TObject *Sender ) {
	Canceled = false;
	Close();
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::CancelButClick( TObject *Sender ) {
	Canceled = true;
	Close();
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::SortButClick( TObject *Sender ) {
	SelectedList->Sorted = true;
	SortBut->Enabled     = false;  // List will remain sorted.
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::RemoveButClick( TObject *Sender ) {
	for ( int i = SelectedList->Items->Count - 1; i >= 0 ; i-- ) {
		if ( SelectedList->Selected[i] )
			SelectedList->Items->Delete( i );
	}
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::SelectAllButClick( TObject *Sender ) {
	for ( int i = 0; i < FileListBox1->Items->Count; i++ )
		FileListBox1->Selected[i] = true;
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::FormCreate( TObject *Sender ) {
	InMouseClick = false;
	String SpecFolder = "";

	MainForm->GetSpecialFolder( CSIDL_DESKTOPDIRECTORY, SpecFolder );
	DriveComboBox1->Drive = ExtractFileDrive( SpecFolder )[1];
	DirectoryListBox1->Directory = ExtractFilePath( SpecFolder );
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::AddDirButClick( TObject *Sender ) {
	String FullName;

	Canceled = true;  // Default.
	for ( int i = 0; i < DirectoryListBox1->Items->Count; i++ ) {
		if ( DirectoryListBox1->Selected[i] ) {
			// Add this file if it isn't already in listbox.
			FullName = MainForm->ZipBuilder1->AppendSlash( DirectoryListBox1->Directory ) + "*.*";

			if ( SelectedList->Items->IndexOf( FullName ) < 0 )
				SelectedList->Items->Add( FullName );
			// Never de-select dirnames from the DirectoryList!
			// DirectoryListBox1->Selected[i] = false;
		}
	}
	// Position the "SelectedList" listbox at the bottom.
	SelectedList->Selected[SelectedList->Items->Count - 1] = true;
	SelectedList->Selected[SelectedList->Items->Count - 1] = false;
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::AddFileButClick( TObject *Sender ) {
	String FullName;

	Canceled = true;  // default
	for ( int i = 0; i < FileListBox1->Items->Count; i++ ) {
		if ( FileListBox1->Selected[i] ) {
			// Add this file if it isn't already in listbox.
			FullName = MainForm->ZipBuilder1->AppendSlash( DirectoryListBox1->Directory ) + FileListBox1->Items->Strings[i];
			if ( SelectedList->Items->IndexOf( FullName ) < 0 )
				SelectedList->Items->Add( FullName );
			FileListBox1->Selected[i] = false;
		}
	}
	// Position the "SelectedList" listbox at the bottom.
	SelectedList->Selected[SelectedList->Items->Count - 1] = true;
	SelectedList->Selected[SelectedList->Items->Count - 1] = false;
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::AddWildBttnClick( TObject *Sender ) {
	if ( WildEdit->Text.Length() && SelectedList->Items->IndexOf( WildEdit->Text ) < 0 ) {
		SelectedList->Items->Add( WildEdit->Text );
		// Position the "SelectedList" listbox at the bottom.
		SelectedList->Selected[SelectedList->Items->Count - 1] = true;
		SelectedList->Selected[SelectedList->Items->Count - 1] = false;
	}
}

//---------------------------------------------------------------------------
void __fastcall TAddFile::AddWildPathBttnClick( TObject *Sender ) {
	if ( WildEdit->Text.Length() ) {
		String FullName = MainForm->ZipBuilder1->AppendSlash( DirectoryListBox1->Directory ) + WildEdit->Text;

		if ( SelectedList->Items->IndexOf( FullName ) < 0 ) {
			SelectedList->Items->Add( FullName );
			// Position the "SelectedList" listbox at the bottom.
			SelectedList->Selected[SelectedList->Items->Count - 1] = true;
			SelectedList->Selected[SelectedList->Items->Count - 1] = false;
		}
	}
}

