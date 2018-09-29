#include "tensor.h"

namespace rosehip {

tensor::tensor(string n)
{
	_name = n;
}

tensor::~tensor()
{
}

const string& tensor::name() const
{
	return _name;
}

}
