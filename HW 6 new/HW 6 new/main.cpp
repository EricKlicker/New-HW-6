//
//  main.cpp
//  HW 6 new
//
//  Created by Eric Klicker on 11/7/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include <iostream>
using namespace std;

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    //Excercise 13.1
    ofstream output;
    
    
    output.open("Exercise13_1.txt");     //create a file
    srand(time(NULL));
    
    int number = rand() % 100;
    for (int i = 0; i < 100; i++)
    {
        output << number << endl;
        number = rand() % 100;
    }
    output.close();
    
    cout << "done" << endl;
    
    
    
    //Excercise 13.2
    string fileName;
    char c;
    int count = -1;
    cout << "Enter a file name: " << endl;
    cin >> fileName;
    
    ifstream input(fileName.c_str());
    
    if (input.fail())
        cout << fileName << " does not exist" << endl;
    else
        cout << fileName << " exists " << endl;
    
    while (!input.eof())
    {
        input >> c;
        ++count;
    }
    cout << count << endl;
    return 0;
}

