#include <iostream>
#include <cmath>
#include <random>

using namespace std;

// Funksioni për të gjetur Faktorin më të Madh të Përbashkët (GCD)
int gcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Funksioni për të gjeneruar çelësin publik dhe privat
void generateKeys(int &n, int &e, int &d)
{
    // Zgjedhim dy numra të mëdhenj prim p dhe q
    int p = 61;
    int q = 53;
    n = p * q;
    int phi = (p - 1) * (q - 1);

    // Zgjedhim një numër e të tillë që GCD(e, phi) = 1 dhe 1 < e < phi
    e = 3;
    while (e < phi && gcd(e, phi) != 1)
    {
        e++;
    }

    // Gjejmë d-in e tillë që (e * d) % phi = 1
    d = 1;
    while ((e * d) % phi != 1)
    {
        d++;
    }
}

// Funksioni për enkriptimin e mesazhit
int encrypt(int message, int e, int n)
{
    int encryptedMessage = 1;
    for (int i = 0; i < e; i++)
    {
        encryptedMessage = (encryptedMessage * message) % n;
    }
    return encryptedMessage;
}

// Funksioni për dekriptimin e mesazhit
int decrypt(int encryptedMessage, int d, int n)
{
    int decryptedMessage = 1;
    for (int i = 0; i < d; i++)
    {
        decryptedMessage = (decryptedMessage * encryptedMessage) % n;
    }
    return decryptedMessage;
}

int main()
{
    int n, e, d;
    generateKeys(n, e, d);

    cout << "Celesi publik (n, e): (" << n << ", " << e << ")" << endl;
    cout << "Celesi privat (n, d): (" << n << ", " << d << ")" << endl;

    // Mesazhi për enkriptim
    int message;
    cout << "Shkruani mesazhin (numër të thjeshtë) për enkriptim: ";
    cin >> message;

    // Enkriptimi
    int encryptedMessage = encrypt(message, e, n);
    cout << "Mesazhi i enkriptuar: " << encryptedMessage << endl;

    // Dekriptimi
    int decryptedMessage = decrypt(encryptedMessage, d, n);
    cout << "Mesazhi i dekriptuar: " << decryptedMessage << endl;

    return 0;
}
