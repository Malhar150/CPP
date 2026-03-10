// // how to write hello world in C++
// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello, World!" << endl;
//     return 0;
// }

// // how to write addition of two numbers in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int num1, num2, sum;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     sum = num1 + num2;
//     cout << "The sum is: " << sum << endl;
//     return 0;
// }

// // how to print your name and age in C++
// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     int age;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter your age: ";
//     cin >> age;
//     cout << "Hello, " << name << "! You are " << age << " years old." << endl;
//     return 0;
// }

// how to swap two numbers in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, temp;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     temp = a;
//     a = b;
//     b = temp;
//     cout << "After swapping: " << endl;
//     cout << "First number: " << a << endl;
//     cout << "Second number: " << b << endl;
//     return 0;
// }

// how to use for loop in c++
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number:";
//     cin>> n;
//     for(int i=1; i<=n; i++){
//         cout<< i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     for(i nt i=1;i<=10;i++){
//         cout<< i <<"";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "ENTER THE NUMBER: ";
//     cin >> n;
//     while (n != 0){
//         if (n > 0){
//             cout << "THE NUMBER IS POSITIVE";
//         }
//         else if (n < 0){
//             cout << "THE NUMBER IS NEGATIVE";
//         }
//         break; 
//     }
//     if (n == 0){
//         cout << "THE NUMBER IS ZERO";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i=2;
//     do{
//         cout<<i<<" ";
//         i=i+2;
//     }while(i<= 20);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "ENTER THE NUMBER: ";
//     cin >> n;
//     for(int i=0;i<=10;i++){
//         cout<< n << "x"<< i << "=" << n*i << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//    int n;
//    long long factorial = 1;
//    cout << "ENTER THE NUMBER: ";
//    cin>> n;
//    for(int i=1; i<=n; i++){
//        factorial *= i;
//     }
//     cout << "THE FACTORIAL OF " << n << " IS " << factorial << endl;
//     return 0;
// }

// Fibonacci series in C++
// #include <iostream>
// using namespace std;
// int main() {
//     int n,a = 0, b = 1, nextTerm = 0;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; ++i) {
//         if (i == 1) {
//             cout << a << " ";
//             continue;
//         }
//         if (i == 2) {
//             cout << b << " ";
//             continue;
//         }
//         nextTerm = a + b;
//         a = b;
//         b = nextTerm;
//         cout << nextTerm << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n,original,reverse=0,remainder;
//     cout << "ENTER THE NUMBER: ";
//     cin >> n;
//     original = n;
//     while (n != 0){
//         remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n /= 10;
//     }
//     if (original == reverse){
//         cout << original <<"THE NUMBER IS A PALINDROME";
//     }
//     else{
//         cout << original <<"THE NUMBER IS NOT A PALINDROME";
//     }
//     return 0;
// }




