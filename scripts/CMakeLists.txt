if(NOT MSVC OR win_broken_tests)
    ROOTTEST_ADD_TEST(utils
                      COMMAND make utils
                      WORKING_DIR ${CMAKE_CURRENT_SOURCE_DIR} )
endif()
