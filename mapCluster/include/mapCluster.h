/*
 * Headers of Statisticals functions
 *
 */
#ifndef STAT_CLUSTER
#define STAT_CLUSTER

#include <iostream>
#include <algorithm>
#include <sstream>
#include <math.h>
#include <unistd.h>
#include "gCluster.h"
#include "cell.h"
#include "csv-reader.h"
#include "graphs.h"
#include "csvDefinitions.h"

class MapClusters
{
public:

int cGLabel;                    // Label gCluster
vector< vector<int> > mapGT;    // Label Ground Truth

};


#endif
