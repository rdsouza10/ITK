/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit
  Module:    itkMetaLandmarkConverter.h
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Insight Consortium. All rights reserved.
  See ITKCopyright.txt or http://www.itk.org/HTML/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef __MetaLandmarkConverter__h
#define __MetaLandmarkConverter__h


#include "metaLandmark.h"
#include "itkLandmarkSpatialObject.h"
#include "itkSpatialObject.h"

namespace itk 
{

template <unsigned int NDimensions = 3>
class MetaLandmarkConverter
{

public:

  MetaLandmarkConverter();
  ~MetaLandmarkConverter() {};

  typedef itk::LandmarkSpatialObject<NDimensions> SpatialObjectType;


  typedef typename SpatialObjectType::TransformType TransformType;

  typedef typename SpatialObjectType::Pointer SpatialObjectPointer;

  //typedef typename itk::NDimensionalSpatialObject NDimSpatialObject;

  SpatialObjectPointer ReadMeta(const char* name);

  bool WriteMeta(SpatialObjectType* spatialObject,const char* name);

  SpatialObjectPointer MetaLandmarkToLandmarkSpatialObject(MetaLandmark * landmark);
  MetaLandmark* LandmarkSpatialObjectToMetaLandmark(SpatialObjectType * spatialObject);

};

} // end namespace itk

#ifndef ITK_MANUAL_INSTANTIATION
  #include "itkMetaLandmarkConverter.txx"
#endif


#endif
