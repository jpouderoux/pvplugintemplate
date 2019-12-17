#!/bin/bash

echo Enter the plugin name
read plugin_name

echo Enter the VTK module name
read module_name

echo Enter the VTK filter name
read filter_name

mkdir -p $plugin_name
cp -f -r template/* $plugin_name

mv $plugin_name/plugin/filters.xml               $plugin_name/plugin/$plugin_name.xml
mv $plugin_name/plugin/vtkmodule/vtkMyFilter.cxx $plugin_name/plugin/vtkmodule/$filter_name.cxx
mv $plugin_name/plugin/vtkmodule/vtkMyFilter.h   $plugin_name/plugin/vtkmodule/$filter_name.h

mv $plugin_name/plugin/vtkmodule $plugin_name/plugin/$module_name

find $plugin_name -type f -exec sed -i "s/\%PLUGIN_NAME\%/$plugin_name/g" {} \;
find $plugin_name -type f -exec sed -i "s/\%MODULE_NAME\%/$module_name/g" {} \;
find $plugin_name -type f -exec sed -i "s/\%FILTER_NAME\%/$filter_name/g" {} \;

echo Plugin created in $plugin_name directory.
echo Done.
