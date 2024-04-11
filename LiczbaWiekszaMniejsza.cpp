#include <iostream>

using namespace std;

int main()
{
    int a, b = 0;
    int ZadeklarowanaLiczba = 1337;
    cout << ZadeklarowanaLiczba << endl;

    cout << "Wprowadz teraz dwie liczby do porownywania z 1337: \n";
    cin >> a;
    cin >> b;

    if (ZadeklarowanaLiczba > a && ZadeklarowanaLiczba > b)
    {
        cout << "Najwieksza liczba to: " << ZadeklarowanaLiczba << endl;
    }
    else if (a > ZadeklarowanaLiczba && a > b)
    {
        cout << "Najwieksza liczba to: " << a << endl;
    }
    else if (b > ZadeklarowanaLiczba && b > a)
    {
        cout << "Najwieksza liczba to: " << b << endl;
    }
    else if ( a == ZadeklarowanaLiczba && a > b)
    {
        cout << "Wartosc zmiennej a jest taka sama, jak zadeklarowanej liczby oraz jest wieksza od b i wynosi: " << a << endl;
    }
    else if (b == ZadeklarowanaLiczba && b > a)
    {
        cout << "Wartosc zmiennej b jest taka sama, jak zadeklarowanej liczby oraz jest wieksza od a i wynosi: " << b << endl;
    }
    return 0;
}