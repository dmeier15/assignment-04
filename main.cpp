//
//  main.cpp Assignment #4
//  Created by Darren Meier on 4/21/16.
//  Copyright © 2016 Darren Meier. All rights reserved.
//

#include <iostream>
#include <vector>
#include "sort.h"

using std::cout;
using std::endl;
using std::vector;

int main()
{
    
    vector<int> a = { 70, 15, 13, 1, 49, 75, };
    vector<int> b = { 7, 69, 32, 41, 11, 3 };
    
    print(a);
    vector<int> min = a;
    selection_sort(min);
    print(min);
    
    
    print(b);
    vector<int> small = b;
    print(merge_sort(b));
    cout << endl;
    system("pause");
    return 0;
}