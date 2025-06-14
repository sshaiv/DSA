// 6. **Reverse an array**
//    Example: `[1, 2, 3] → [3, 2, 1]`



#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int num;

    cout << "Enter elements (end with 0): ";
    while (cin >> num && num != 0) {
        a.push_back(num);
    }

    int start = 0;
    int end = a.size() - 1;

    while (start < end) {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}







// #include <iostream>
// using namespace std;

// int main() {
//     int size, num, count = 0;

//     cout << "Enter maximum number of elements: ";
//     cin >> size;

//     int a[size];

//     cout << "Enter elements (end with 0): ";
//     while (cin >> num && num != 0) {
//         if (count < size) {
//             a[count] = num;
//             count++;
//         } else {
//             cout << "Array limit exceeded!" << endl;
//             break;
//         }
//     }

//     // Reverse using start and end pointers
//     int start = 0;
//     int end = count - 1;

//     while (start < end) {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }

//     cout << "Reversed array: ";
//     for (int i = 0; i < count; i++) {
//         cout << a[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }
