/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtk%FILTER_NAME%.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   vtk%FILTER_NAME%
 * @brief   copy oriented and scaled glyph geometry to every input point
  */

#ifndef vtk%FILTER_NAME%_h
#define vtk%FILTER_NAME%_h

#include "%MODULE_NAME%Module.h"

#include <vtkPolyDataAlgorithm.h>

class vtk%FILTER_NAME% : public vtkPolyDataAlgorithm
{
public:
  vtkTypeMacro(vtk%FILTER_NAME%, vtkPolyDataAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent) override;

  /**
   * Construct object.
   */
  static vtk%FILTER_NAME%* New();

protected:
  vtk%FILTER_NAME%();
  ~vtk%FILTER_NAME%() override;

  int RequestData(vtkInformation*, vtkInformationVector**, vtkInformationVector*) override;

private:
  vtk%FILTER_NAME%(const vtk%FILTER_NAME%&) = delete;
  void operator=(const vtk%FILTER_NAME%&) = delete;
};

#endif
