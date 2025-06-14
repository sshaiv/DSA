// 7. **Print all positive numbers** from an array.



#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>a;
    int num;
    
    cout<<"enter num : ";
    while(cin>>num && num!=0)
    {
        a.push_back(num);
    }
    
    for (int i=0; i<a.size();i++)
    {
        if( a[i] > 0){
            
            cout<< " "<<a[i]<<"";
        }
    }

    return 0;
}