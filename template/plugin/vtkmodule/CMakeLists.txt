set(classes
  vtk%FILTER_NAME%
)

vtk_module_add_module(%MODULE_NAME%
  FORCE_STATIC
  CLASSES ${classes}
  )

#target_link_libraries(%MODULE_NAME%
#    PUBLIC
#    MyDependency
#)
