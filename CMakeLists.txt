cmake_minimum_required(VERSION 3.4.3)
project(mw_parse CXX)

macro(add_sources)
	file (RELATIVE_PATH _relPath "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}")

	foreach(_src ${ARGN})

		if(_relPath)
			set_property(TARGET mw_parse APPEND PROPERTY SRC_LIST "${_relPath}/${_src}")
		else()
			set_property(TARGET mw_parse APPEND PROPERTY SRC_LIST "${_src}")
		endif()

	endforeach()
endmacro()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(COMPILE_FLAGS "-std=c++14 -Wall -fmax-errors=1 -ggdb -Werror")
	set(LINK_FLAGS "-std=c++14 -Wall -fmax-errors=1 -ggdb -Werror -ldl")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
		set(COMPILE_FLAGS "-std=c++14 -Wall -ferror-limit=1 -Werror")
		set(LINK_FLAGS "--std=c++14 -Wall -ferror-limit=1 - Werror")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
	set(COMPILE_FLAGS "/W4 /std:c++latest /MP")
	set(LINK_FLAGS "/NODEFAULTLIB:msvcrtd.lib")
endif()


#set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${LINK_FLAGS}")

add_executable(mw_parse "")

add_subdirectory(src)

get_property(SRCS TARGET mw_parse PROPERTY SRC_LIST)
target_sources(mw_parse PRIVATE ${SRCS})

include_directories(src)

if (UNIX)
    include_directories(/usr/include)
endif (UNIX)
