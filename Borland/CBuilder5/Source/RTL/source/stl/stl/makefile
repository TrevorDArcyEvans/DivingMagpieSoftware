#############################################################################
#									    #
# The make process relies on the creation of DLL and library response file  #
# creation.  To control the location of object modules the following should #
# be defined:                                                               #
#                                                                           #
#     IMPOBJS - A list of object modules that should appear in the DLL      #
#               import library.                                             #
#                                                                           #
#        OBJS - If a DLL is build, this is a list of the object modules     #
#               that are linked into the DLL.  If building a library, this  #
#               is the list of object modules that goes into the library.   #
#                                                                           #
# The building of miscellaneous object modules and libraries is controlled  #
# by the list of files in the MISC variable.                                #
#                                                                           #
#  $Revision:   9.2  $								    #
#									    #
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################
OBJS =               \
	tempbuf.obj  \
	random.obj   \
	tree.obj     \
        vecbool.obj  \
        memory.obj

#############################################################################
# Configure the environment apprpriately.                                   #
#############################################################################
!include rules.mak
!include ..\stlopts.inc
