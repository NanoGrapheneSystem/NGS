if(APPLE)
add_executable( ngs-applesedemo main.cpp r1_signature_compactor.cpp )


target_link_libraries( ngs-applesedemo
        PRIVATE fc ${PLATFORM_SPECIFIC_LIBS} 
        )

set_target_properties(ngs-applesedemo PROPERTIES LINK_FLAGS "-framework security -framework corefoundation")

#Demostration of signing automatically during build; you will need to change parameters for your signing credentials
#[[
add_custom_command(TARGET ngs-applesedemo POST_BUILD
                   COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/sign.sh C5139C2C4D7FA071EFBFD86CE44B652631C9376A 5A4683969Z.one.block.ngs-applesedemo /Users/spoon/Library/MobileDevice/Provisioning\ Profiles/95813ad5-e880-432f-85c6-ade3b3298392.provisionprofile
                   WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                   VERBATIM
                  )
]]

install( TARGETS
   ngs-applesedemo

   RUNTIME DESTINATION ${CMAKE_INSTALL_FULL_BINDIR}
   LIBRARY DESTINATION ${CMAKE_INSTALL_FULL_LIBDIR}
   ARCHIVE DESTINATION ${CMAKE_INSTALL_FULL_LIBDIR}
)

endif(APPLE)
