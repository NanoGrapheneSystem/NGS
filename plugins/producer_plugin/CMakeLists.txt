file(GLOB HEADERS "include/ngs/producer_plugin/*.hpp")

add_library( producer_plugin
             producer_plugin.cpp
             ${HEADERS}
           )

target_link_libraries( producer_plugin chain_plugin appbase ngs_chain ngs_utilities net_plugin )
target_include_directories( producer_plugin
                            PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
