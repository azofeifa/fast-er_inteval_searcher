#ifndef EM_H
#define EM_H
#include "load.h"
#include <map>
#include <vector>
#include <string>
using namespace std;
map<string, vector<double> > get_stats(map<string, vector<segment>>, double, double, map<string, vector<double>>&,
map<string, vector<vector<double>> > &, int  );
#endif
