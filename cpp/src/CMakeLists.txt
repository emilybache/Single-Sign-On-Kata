set(SRC_LIB_NAME src)
set(SOURCES
        MyService.cpp
        MyService.h
        SSOToken.cpp
        SSOToken.h
        Request.cpp
        Request.h
        Response.cpp
        Response.h
        AuthenticationGateway.cpp
        AuthenticationGateway.h
        SingleSignOnRegistry.cpp
        SingleSignOnRegistry.h)
add_library(${SRC_LIB_NAME} ${SOURCES})
target_sources(${SRC_LIB_NAME} PRIVATE ${SOURCES})
target_include_directories(${SRC_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
