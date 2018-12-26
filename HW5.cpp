#include <iostream>

using namespace std;


int main()
{
    int M;
    cin >> M;
    int N;
    int *x = new int[N];
    int *y = new int[N];
    double *z = new double[N];
    for(int i = 0; i < N; i++)
    {
        cout << "масса равна "; cin >> x[i];
        cout << "cтоимость равна "; cin >> y[i];
        z[i] = x[i] / y[i];
    }
    
    double max = z[0];
    int j = 0;
    for(int i = 1; i < N; i++)
    {
        if(max < z[i])
        {
            max = z[i];
            j = i;
        }
    }
    
    double Z = M / x[j];
    cout << "Допустимая стоимость не более " << Z*y[j];

    return 0;
}
