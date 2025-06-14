// 5. **Count even and odd numbers** in an array.
//    Example: `[1, 2, 3, 4] → Even: 2, Odd: 2`



// ....vector..............


// #include <iostream>
// #include <vector>
//  #include <climits>
// using namespace std;

// int main() {
//    vector<int>a;
//    int num;
   
//    cout<<"Enter element & stop upto 0: "<<endl;
//    while(cin>>num && num !=0){
//        a.push_back(num);
//    }
   
//    int count=0;
//    int even=0;
//    int odd =0;
//    for(int i=0 ; i<a.size();i++)
// {
    
//   // cout<<"print"<<a[i]; 
   
//    if (a[i]%2==0){
//       even ++; 
//    }
//    else{
//        odd ++;
//    }
//    count ++;
// } 


// cout<<"total element:"<<count<<endl;
// cout<<"even :"<<even<<endl;
// cout<<"odd :"<<odd;

// return 0;
// }







#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "How many numbers you want to enter? ";
    cin >> num;

    int a[num];  

    cout << "Enter " << num << " elements: " << endl;
    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }

    int count = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < num; i++) {
        if (a[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        count++;
    }

    cout << "Total elements: " << count << endl;
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}
