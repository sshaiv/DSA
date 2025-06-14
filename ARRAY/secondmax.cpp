// 8. **Find the second largest number** in an array.

#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int main() {
   vector <int>a;
   int num;
   int maxi=INT_MIN;
   int second_maxi=maxi;
   
   cout<<"enter num (stop with 0)";
   while(cin>>num && num!=0){
       a.push_back(num);
   }
   
   for (int i=0; i<a.size();i++)
   {
       if (a[i]>maxi)
       {
           second_maxi=maxi;
           maxi=a[i];
       }
      else if(a[i] > second_maxi && a[i] != maxi)
           {
               second_maxi=a[i];
           }
   }
   
   cout << "Maximum: " << maxi << endl;

    if (second_maxi == INT_MIN)
        cout << "No second maximum found (all numbers same or only one number)." << endl;
    else
        cout << "Second Maximum: " << second_maxi << endl;
    return 0;
}
