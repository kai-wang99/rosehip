#ifndef __ROSEHIP_TENSOR_H__
#define __ROSEHIP_TENSOR_H__

#include <string>
#include <list>

using namespace std;

namespace rosehip {

class shape{
public:
	shape();
	shape(int dim,...);
	~shape();
	const int& ndim() const;
private:
	int _ndim;
	list<int> _dims;
};

class tensor{
public:
	tensor();
	~tensor();
private:
	shape _shape;
	char* _data;

};

}

#endif //__ROSEHIP_TENSOR_H__
