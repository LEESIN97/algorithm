#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    int r;
    while(b!=0){
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
   int t;
   int n;
   int temp;
   long long gcd_sum;

   cin >> t;
   cin.ignore();

   vector<int> v;
   vector<int>::iterator iter1, iter2;

   while(t--){
       gcd_sum = 0;
       cin >> n;
       while(n--){
           cin >> temp;
           v.push_back(temp);
       }
       for(iter1 = v.begin(); iter1 != (v.end() -1); iter1++)
           for(iter2 = (iter1+1); iter2 != v.end(); iter2++)
               gcd_sum += gcd(*iter1, *iter2);
       cout << gcd_sum << '\n';
       v.clear();
   }

   return 0;
}
