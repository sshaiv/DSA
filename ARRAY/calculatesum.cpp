// 3. **Calculate the sum** of all elements in an array.
       //  Example: `[1, 2, 3] → 6`



  
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
    
//     int sum =0;
//     for (int i=0; i<n;i++)
//     {
//         sum+=a[i];
//       // cout<<a[i];
//     }
//     cout<<"Sum of array  is:"<<sum;
    
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

    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
       sum+=a[i];
    }

    cout << "Sum of array is: " << sum << endl;

    return 0;
}
      