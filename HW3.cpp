#include <iostream>
#include <vector> 

using namespace std;

int main()
{
    int x;
    cin >> x;
    int arr = new int[x];
    for(int i = 0; i < x; i++)
    cin >> x;
    int n,k; 
    int j = 0; 
    for(int i = 0; i < x; i++)
    {
        if(arr[i] == n)
        j++;
        if(arr[i] == k)
        j++;
    }
    if(j => 2)
    cout << "true";
    else
    cout << "false";
return 0;
}