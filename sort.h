//
//  sort.h
//  #4
//
//  Created by Darren Meier on 4/22/16.
//  Copyright © 2016 Darren Meier. All rights reserved.
//

#ifndef sort_h
#define sort_h

#include <iostream>
#include <vector>

using std::vector;

void print(const vector<int> & n);

void selection_sort(vector<int> & v);

vector<int> merge_sort(const vector<int> & v);

#endif /* sort_h */
