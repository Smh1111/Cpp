#include<unstylize.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

string unstylize(string w)
{
    string result = "";
    if (w.size() == 1)
    {
        return w;
    }
    if (w.size() == 2 && w[0] == '*' && w[1] == '*')
    {
        return result;
    }
    else if (w[0] == '*' && w[w.size()-1] == '*')
    {
        
        for ( int i = 1; i <= w.size()-2; i++)
        {
            result += w[i];
            
            
        }
        return result;
    }
    else
    {
        return w;
    }

}