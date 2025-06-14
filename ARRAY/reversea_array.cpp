// 6. **Reverse an array**
//    Example: `[1, 2, 3] → [3, 2, 1]`




#include <iostream>
#include <vector>
 #include <climits>
using namespace std;

int main() {
   vector<int>a;
   int num;
   
   cout<<"Enter element & stop upto 0: "<<endl;
   while(cin>>num && num !=0){
       a.push_back(num);
   }
   
   
   for(int i=0 ; i<a.size()/2;i++)
{
    
 swap(a[i], a[a.size() - i - 1]); 
    
}
   
cout<<"reverse : "<<" ";
   for(int i=0 ; i<a.size();i++)
{
    
 cout<<a[i];
    
}

cout<<endl;

return 0;
}








// #include <iostream>
// #include <vector>
//  #include <climits>
// using namespace std;

// int main() {
//    // vector<int>a;
   
//    int num, count=0;
//    cout<<"num plz";
//    cin>>num;
   
//    int a[num];
   
//    cout<<"Enter element & stop upto 0: "<<endl;
//    while(cin>>num && num !=0){
//       a[count]=num;
//       count++;
//    }
   
   
//    for(int i=0 ; i<count/2;i++)
// {
    
//  swap(a[i], a[count - i - 1]); 
    
// }
   
// cout<<"reverse : "<<" ";
//    for(int i=0 ; i<count;i++)
// {
    
//  cout<<a[i];
    
// }

// cout<<endl;

// return 0;
// }
