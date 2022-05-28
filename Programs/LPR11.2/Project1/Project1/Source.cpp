#include <iostream>
#include <math.h>
using namespace std;

double sum(double*, double, int);
double sumr(double*, double, int);

int main()
{
    setlocale(0, "");
    double x;
    double a[] = { 1,2,3,4,5,6,7,8,9,10,11 };
    int n;
    cout << "Введите х=";
    cin >> x;
    cout << "Введите порядок полинома (1<=n<=10), n=";
    cin >> n;

    cout << "Без рекурсии - P" << n << " (" << x << ") = " << sum(a, x, n) << endl;
    cout << "С рекурсией - P" << n << " (" << x << ") = " << sumr(a, x, n) << endl;

    cout << "\n";
    system("pause");
}
double sum(double a[], double x, int n)
{
    int i;
    double s;
    if (n == 1)
        s = a[n - 1] + a[n] * x;
    if (n > 1)
    {
        s = a[n];
        for (i = n; i >= 1; i--)
            s = a[i - 1] + x * s;
    }
	return s;
}
// доделать
//double sumr(double a[], double x, int n)
//{
//    if (n == 1)
//        return a[n - 1] + a[n] * x;
//    else
//        return sumr(a, x, n - 1) * (a[n-1] + x);
//}
