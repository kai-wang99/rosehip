#ifndef __ROSEHIP_TENSOR_H__
#define __ROSEHIP_TENSOR_H__

#include <string>
using namespace std;

namespace rosehip {

class tensor{
public:
	tensor(string n);
	~tensor();
	const string& name() const;
private:
	string _name;

};

}

#endif //__ROSEHIP_TENSOR_H__
