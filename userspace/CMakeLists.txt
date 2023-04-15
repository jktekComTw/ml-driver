cmake_minimum_required(VERSION 3.16)
PROJECT (CTRL_PAiNEL)

SET(APP_SRCS Twrite.c Uspace.c )

foreach(ggfile ${APP_SRCS}) 
	string( REPLACE ".c" "" GGNAME ${ggfile} )
	ADD_EXECUTABLE (${GGNAME} ${ggfile})
endforeach(ggfile ${APP_SRCS})

#file( GLOB APP_SOURCES app/*.cxx )
#foreach( testsourcefile ${APP_SOURCES} )
#    string( REPLACE ".cpp" "" testname ${testsourcefile} )
#    add_executable( ${testname} ${testsourcefile} )
#    target_link_libraries( ${testname} YourLib )
#endforeach( testsourcefile ${APP_SOURCES} )
