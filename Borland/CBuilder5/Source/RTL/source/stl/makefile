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
#  $Revision:   9.7  $                                                               #
#                                                                           #
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################

STLOBJS=               \
         bitset.obj    \
         complex.obj   \
         fstream.obj   \
         instance.obj  \
         iomanip.obj   \
         ios.obj       \
         iostream.obj  \
         istream.obj   \
         ostream.obj   \
         sstream.obj   \
         streambu.obj  \
         strstrea.obj  \
         wstream.obj   \
         limits.obj    \
         byname.obj    \
         char.obj      \
         charby.obj    \
         locinst.obj   \
         messages.obj  \
         money.obj     \
         rwcats.obj    \
         rwlocale.obj  \
         rwstderr.obj  \
         rwtime.obj    \
         vendor.obj    \
         wchar.obj     \
         wcharby.obj   \
         wmoney.obj    \
         wtime.obj     \
         stdexcpt.obj  \
         memory.obj    \
         random.obj    \
         tempbuf.obj   \
         tree.obj      \
         vecbool.obj   \
         string.obj    \
         valarray.obj


OBJS = $(OBJS) $(STLOBJS)

.path.cpp=bitset;complex;iostream;limits;locale;stdexcpt;stl;string;valarray


#############################################################################
# Configure the environment apprpriately.                                   #
#############################################################################
!include rules.mak
!include stlopts.inc
