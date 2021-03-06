/*=========================================================================

  Program:   Visualization Toolkit
  Module:    %FILTER_NAME%.cxx

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#include "%FILTER_NAME%.h"

#include <vtkInformation.h>
#include <vtkInformationVector.h>
#include <vtkNew.h>
#include <vtkObjectFactory.h>
#include <vtkPolyData.h>
#include <vtkStreamingDemandDrivenPipeline.h>

vtkStandardNewMacro(%FILTER_NAME%);

//----------------------------------------------------------------------------
%FILTER_NAME%::%FILTER_NAME%()
{
}

//----------------------------------------------------------------------------
%FILTER_NAME%::~%FILTER_NAME%()
{
}

//----------------------------------------------------------------------------
int %FILTER_NAME%::RequestData(vtkInformation* vtkNotUsed(request),
  vtkInformationVector** inputVector, vtkInformationVector* outputVector)
{
  // get the info objects
  vtkDataSet* input = vtkDataSet::GetData(inputVector[0], 0);
  vtkPolyData* output = vtkPolyData::GetData(outputVector, 0);

  return 1;
}

//----------------------------------------------------------------------------
void %FILTER_NAME%::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}
