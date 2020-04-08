#ifndef MYGRAPH_H
#define MYGRAPH_H

#include <string>

using namespace std;

class MyGraph {
private:
	string* counties;
	int distances[15][15];
	void loadDistances();

public:
	MyGraph();
};

MyGraph::MyGraph() {

	//initialize the counties
	counties[0] = "Mohave";
	counties[1] = "Coconino";
	counties[2] = "Navajo";
	counties[3] = "Apache";
	counties[4] = "Greenlee";
	counties[5] = "Cochise";
	counties[6] = "Santa Cruz";
	counties[7] = "Pima";
	counties[8] = "Pinal";
	counties[9] = "Graham";
	counties[10] = "Gila";
	counties[11] = "Yavapai";
	counties[12] = "La Paz";
	counties[13] = "Yuma";
	counties[14] = "Maricopa";
	//load the distances
}

void MyGraph::loadDistances() {

}







#endif