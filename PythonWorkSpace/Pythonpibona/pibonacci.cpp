#include <vector>
#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long ull;
std::vector<ull> fib;
class ProdFib
{
   
public:



    static std::vector<ull> productFib(ull prod) 
    {
        if (fib.size()<=1)
        {
            if(fib.size()==0)
            fib.push_back(0);

            fib.push_back(1);
        }
 
        vector<ull> answer;
        int index = 1;
        if (prod == 0)
        {
            vector<ull> ans;
            return  ans = { 0,1,1 };
        }
        if (prod == 1)
        {
            vector<ull> ans;
            return ans = { 1,1,1 };
        }
   
        for (; getfib(index) * getfib(index) < prod; index++); //if prod ==21*34 then fib(index)=34 = fib.at(index-1), fib.size()==index

        if (prod == (fib.at(index - 1) * fib.at(index - 2)))
            return answer = { fib.at(index - 2), fib.at(index - 1),1 };

        else if (prod < (fib.at(index - 1) * fib.at(index - 2)))
            return answer = { fib.at(index - 2), fib.at(index - 1),0 };

        else if (prod > (fib.at(index - 1) * fib.at(index - 2)))
            return answer = { fib.at(index - 1), getfib(index+1),0 };

       
    }

    static ull getfib(ull n)
    {
        if (fib.size()>=n)
        {
            return (fib.at(n-1));
        }
        else
        {
            for (ull i=fib.size(); i < n; i++)
            {
                fib.push_back(fib.at(i-1)+fib.at(i-2));
            }
            return fib.back();
        }
    }
};
int main()
{
    std::vector<ull> m1= ProdFib::productFib(714);
    std::vector<ull> m2= ProdFib::productFib(800);

    for (int i = 0; i < 3; i++)
    {
        cout << m1.at(i) << endl;
    }
   //21,34,1
    for (int i = 0; i < 3; i++)
    {
        cout << m2.at(i) << endl;
    }
//34,55,0
   

}