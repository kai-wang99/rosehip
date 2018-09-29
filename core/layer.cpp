#include "layer.h"

namespace rosehip {

layer::layer(string n)
{
	_name = n;
}

layer::~layer()
{
}

const string& layer::name() const
{
	return _name;
}

}
