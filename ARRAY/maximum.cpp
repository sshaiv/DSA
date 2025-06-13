
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
    
//     int maxi=INT_MIN;
//     for (int i=0; i<n;i++)
//     {
//         if(a[i]>maxi){
//             maxi=a[i];
//         }
//       // cout<<a[i];
//     }
//     cout<<"maximum is:"<<maxi;
    
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

    int maxi = INT_MIN;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > maxi) {
            maxi = a[i];
        }
    }

    cout << "Maximum is: " << maxi << endl;

    return 0;
}
