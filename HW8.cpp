#include <iostream>

using namespace std;

int main()
{
    int X;
    cin >> X;
    int Y;
    cin >> Y;
    int *x1 = new int[X];
    int *y1 = new int[Y];
    for(int i = 1; i < X; i++)
    {
        cout << "масса предмета " << i << " равна "; cin << x1[i];
        cout << "стоимость предмета " << i << " равна "; cin << y1[i];
        cout << "x1";
    }
    int **F = new *int[X] 
    for(int i = 0; i < X; i++)
    F[i] = new int[Y];
    
    for(int i = 0; i < X; i++)
    F[i][0] = 0;
    for(int i = 0; i < Y; i++)
    F[0][i] = 0;
    
    for(int i = 1; i < X; i++)
    {
        for(int j = 1; j < Y; i++)
        {
            if(j < x1[j])
            F[i][j] = max(F[i - 1][j], A[i - 1][j - x1[j]] + y1[i])
        }
    }
    cout << "x1";
    cout << F[X - 1][Y - 1];
    
    return 0;
}
