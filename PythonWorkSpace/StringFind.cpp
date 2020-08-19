#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{


}

int compare(string &find, string &found )
{
   int i=0;
   int index;
   for (i=0;i<found.size(); i++ )
   {
       bool did_find = true;
       for(int j=0; j<find.size();j++)
       {
            if(found.at(i+j)!=find.at(j))
            {
                did_find= false;
            }
            if (did_find ==false)
            {
                break;
            }
       }
       if(did_find ==true)
       {
           index=i;
           break;
       }
}