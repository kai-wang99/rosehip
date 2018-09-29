#include <stdarg.h>
#include "tensor.h"

namespace rosehip {

shape::shape()
{
	_ndim = 0;
}

shape::shape(int dim,...)
{
	va_list ap;
	va_start(ap, dim);

	_ndim = dim;
	for (int i = 0; i < dim; i++)
	{
		_dims.push_back(va_arg(ap, int));
	}
	va_end(ap);
}

shape::~shape()
{
}

const int& shape::ndim() const
{
	return _ndim;
}

tensor::tensor()
{
	_data = NULL;
}

tensor::~tensor()
{
}

}
