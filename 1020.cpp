#include <iostream>

#define PI acos(-1.0)
int main() {
    int n;
    double len, r,x[100],y[100];

    std::cin >> n >> r;
    if (n > 16 || n < 1) {
        return 0;
    }

    len = 2*PI*r;
    if (n == 1) {
        printf("%.2lf\n",len);
        return 0;
    }

    for(int i=0; i<n; i++) {
        std::cin >> x[i] >> y[i];
    }

    for(int i=0; i < n-1; i++) {
        len += sqrt((x[i+1]-x[i])*(x[i+1]-x[i]) + (y[i+1]-y[i])*(y[i+1]-y[i]));
    }
    len += sqrt( (x[n-1]-x[0])*(x[n-1]-x[0]) + (y[n-1]-y[0])*(y[n-1]-y[0]));

    printf("%.2lf\n",len);
    return 0;
}
