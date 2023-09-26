// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n) {
//         int col = 1;
//       int val = row;
//         while(col <= row) {
//             cout << val;
//             val++;
//             col = col + 1;
//         }

//       cout << endl;

//         row = row + 1;

//     }

//     return 0;

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int row = 1;

//     while (row <= n) {
//         int col = 1;

//         while (col <= n) {
//           char start = 'A';
//           // char ch = 'A' + col -1;
//             cout << start + (row - 1) * 3 + col  <<" ";
//             start = start + 1;

//             col++;
//         }

//         cout << endl;
//         row++;
//     }

//     return 0;
// }

//

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;

//   int row = 1;

//   while (row <= n) {
//     // imp line ↓
//     int spaces = n - row;
//     while (spaces >= 1) {
//       cout << " ";
//       spaces--;
//     }
//     int col = 1;
    
//     while (col <= row) {
//       cout << col;
//       col++;
//       // we take care of spaces too
//     }

//     int start2 = row - 1;
//     while(start2 >= 1) {
//       cout << start2;
//       start2--;
//     }
//     cout << endl;
//     row++;
//   }

//   return 0;
// }

#include <iostream> 
using namespace std;

int main() {

  int n; 
  cin >> n;

  int row = n;
  while(row >= 1) {
    int col = 1;
    int start = 1;
    
    while(col <= row) {
      cout << start;
      start++;
      col++;
    }

    int k = 0;
    while(k <= row) {
      cout << k;
      k++;
    }
    
    cout << endl;
    row--;
  }
  return 0;
}
