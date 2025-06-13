
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n;
//     cout<<"please give n";
//     cin>>n;
    
//     int a[n] ;
    
//     cout<<"give element";
//     for (int i=0;i<n;i++)
//     {
//         cin>>a[i];
        
//     }
    
//     int mini=INT_MAX;
//     for (int i=0; i<n;i++)
//     {
//         if(a[i]<mini){
//             mini=a[i];
//         }
//       // cout<<a[i];
//     }
//     cout<<"minimum is:"<<mini;
    
//     return 0;
// }


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> a;
    int num;

    cout << "Enter numbers (type 0 to stop): ";
    while (cin >> num && num != 0) {
        a.push_back(num);
    }

   int mini=INT_MAX;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < mini) {
            mini = a[i];
        }
    }

    cout << "Minimum is: " << mini << endl;

    return 0;
}
