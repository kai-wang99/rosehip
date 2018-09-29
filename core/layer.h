#ifndef __ROSEHIP_LAYER_H__
#define __ROSEHIP_LAYER_H__

#include <string>
using namespace std;

namespace rosehip {

class layer{
public:
	layer(string n);
	~layer();
	const string& name() const;
private:
	string _name;

};

}

#endif //__ROSEHIP_LAYER_H__
