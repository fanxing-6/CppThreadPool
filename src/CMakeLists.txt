include_guard(GLOBAL)


set(THREADPOOL_SRC
        thread_pool.cpp
)

message(STATUS "libs ${LIBS}")

set(MOUDLE_NAME "threadpool")

add_library(${MOUDLE_NAME} SHARED ${THREADPOOL_SRC})

target_link_libraries(${MOUDLE_NAME} PRIVATE ${LIBS})
