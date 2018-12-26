#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int* F=new int[n + 1];
F[0] = 0;
int x;
for(int i=1; i<n+1; i++){
        x = F[i - 1] + 1;
        for(int j = 2; j*j < i + 1; j++){
            if( x > F[i - j*j] + 1){
                x = F[i - j*j] + 1;
            }
        }
        F[i] = x;
}
cout<<F[n];
return 0;
}
