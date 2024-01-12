include_guard(GLOBAL)


set(THREADPOOL_SRC
        thread_pool.cpp
)

message(STATUS "libs ${LIBS}")

set(MODULE_NAME "threadpool")

add_library(${MODULE_NAME} SHARED ${THREADPOOL_SRC})

target_link_libraries(${MODULE_NAME} PRIVATE ${LIBS})
