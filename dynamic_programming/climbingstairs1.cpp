#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if (n == 0 || n == 1) return 1;
    int prev2 = 1; 
    int prev = 1;  
    for (int i = 2; i <= n; i++) {
        int cur = prev + prev2; 
        prev2 = prev;          
        prev = cur;            
    }
    return prev;
}

int main() {
    int n = 3;
    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;
    return 0;
}
