set(classes
  %FILTER_NAME%
)

vtk_module_add_module(%MODULE_NAME%
  FORCE_STATIC
  CLASSES ${classes}
  )
