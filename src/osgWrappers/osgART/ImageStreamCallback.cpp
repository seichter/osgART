// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ImageStream>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osgART/ImageStreamCallback>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgART::ImageStreamCallback)
	I_DeclaringFile("osgART/ImageStreamCallback");
	I_BaseType(osg::NodeCallback);
	I_Constructor1(IN, osg::ImageStream *, imagestream,
	               Properties::NON_EXPLICIT,
	               ____ImageStreamCallback__osg_ImageStream_P1,
	               "",
	               "");
END_REFLECTOR

