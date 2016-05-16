%module square
%{
#include "square.hpp"
%}

%include "polygon.hpp"
%include "square.hpp"

%template(PolygonInt) Polygon<int>;
%template(SquareInt) Square<int>;
