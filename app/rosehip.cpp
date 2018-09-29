
#include <iostream>
#include "layer.h"

using namespace std;
using namespace rosehip;

int main(int argc, char **argv) {
	class layer mylayer("test layer");
	cout<< mylayer.name()<<"\n";
	return 0;
}

