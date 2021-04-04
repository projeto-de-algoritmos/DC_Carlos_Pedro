#include <iostream>
#include <math.h>

using namespace std;

int search(int *vetor, long long int size, double number) {
    if (number > vetor[size - 1])
        return size + 1;
    int esq = -1,
    dir = size;
    while (esq < dir - 1)
    {
        int half = (esq + dir) / 2;
        (vetor[half] < number) ?
            esq = half  :
            dir = half;
    }
    return dir;
}

int main(void) {

    long long int circle, 
    shot,
    x , y,
    sum = 0, b;
    double a;

    cin >> circle >> shot;

    if (!circle || !shot)
        return 0;
    int * radius = new int[circle];

    for (int i = 0; i < circle; ++i)
        cin >> radius[i];
    
    for (int i = 0; i < shot; i++)
    {
        cin >> x >> y;

        a = sqrt((x * x) + (y * y));
        b = search(radius, circle, a);

        if (b < circle)
            sum += (circle - b);
    }
    cout << sum << "\n";
    return 0;

}