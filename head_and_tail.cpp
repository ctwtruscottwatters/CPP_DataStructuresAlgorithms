// head_and_tail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void tail(int n);
void head(int n);

void tail(int n) {
    if (n == 0) return;
    cout << "Tail called with n = " << n << endl;
    tail(n - 1);

}

void head(int n) {
    if (n == 0) return;
    head(n - 1);
    cout << "Head called with n = " << n << endl;

}
int main()
{
    std::cout << "Charles Truscott Watters\n";
    tail(13);
    head(13);

}