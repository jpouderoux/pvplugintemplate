/*=========================================================================

  Program:   Visualization Toolkit
  Module:    %FILTER_NAME%.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/**
 * @class   %FILTER_NAME%
 * @brief   copy oriented and scaled glyph geometry to every input point
  */

#ifndef %FILTER_NAME%_h
#define %FILTER_NAME%_h

#include "%MODULE_NAME%Module.h"

#include <vtkPolyDataAlgorithm.h>

class %FILTER_NAME% : public vtkPolyDataAlgorithm
{
public:
  vtkTypeMacro(%FILTER_NAME%, vtkPolyDataAlgorithm);
  void PrintSelf(ostream& os, vtkIndent indent) override;

  /**
   * Construct object.
   */
  static %FILTER_NAME%* New();

protected:
  %FILTER_NAME%();
  ~%FILTER_NAME%() override;

  int RequestData(vtkInformation*, vtkInformationVector**, vtkInformationVector*) override;

private:
  %FILTER_NAME%(const %FILTER_NAME%&) = delete;
  void operator=(const %FILTER_NAME%&) = delete;
};

#endif
