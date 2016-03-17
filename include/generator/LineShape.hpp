// Copyright 2015 Markus Ilmola
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.

#ifndef GENERATOR_LINESHAPE_HPP
#define GENERATOR_LINESHAPE_HPP

#include "ParametricShape.hpp"


namespace generator {


/// A line from a point to a point.
/// @image html LineShape.svg
class LineShape :
	private ParametricShape {
public:

	/// @param start Start position
	/// @param end End position
	/// @param segments Number of subdivisions
	LineShape(
		const gml::dvec2& start = {0.0, -1.0},
		const gml::dvec2& end = {0.0, 1.0},
		unsigned segments = 8u
	);

	using ParametricShape::edges;

	using ParametricShape::vertices;

};


}

#endif /* LINE_HPP_ */
