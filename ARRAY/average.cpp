// 4. **Find the average** of elements in an array.
//    Example: `[1, 2, 3] → 2`



// ..........using vector.............

// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int main() {

//     vector<int> a;
//     int num;

//     cout << "Enter numbers (type 0 to stop): ";
//     while (cin >> num && num != 0) {
//         a.push_back(num);
//     }

//     int sum = 0;
//     int count=0;
//     for (int i = 0; i < a.size(); i++) {
//        sum+=a[i];
//        count++;
//     }

// int average = sum/count;
//     cout << "Average: " << average<< endl;

//     return 0;
// }


// ............simple code....
// #include <iostream>
// using namespace std;

// int main() {
//     int a[100]; // assume max 100 inputs
//     int num, sum = 0, count = 0;

//     cout << "Enter numbers (type 0 to stop): ";
//     for (int i = 0; i < 100; i++) {
//         cin >> num;
//         if (num == 0)
//             break;

//         a[i] = num;
//         sum += num;
//         count++;
//     }

//     if (count == 0) {
//         cout << "No numbers entered. Cannot compute average." << endl;
//         return 0;
//     }

//     int average = sum / count;
//     cout << "Average: " << average << endl;

//     return 0;
// }



// .........using while loop....
#include <iostream>
using namespace std;

int main() {
    int a[100]; // assume maximum 100 inputs
    int num, count = 0, sum = 0;

    cout << "Enter numbers (type 0 to stop): ";
    while (cin >> num && num != 0) {
        a[count] = num;
        sum += num;
        count++;
    }

    if (count == 0) {
        cout << "No numbers entered. Cannot compute average." << endl;
        return 0;
    }

    int average = sum / count;
    cout << "Average: " << average << endl;

    return 0;
}
