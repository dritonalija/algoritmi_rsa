#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// Funksioni për të gjetur gcd (Përpjesëtuesin më të madh të përbashkët)
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Funksioni për të gjetur modulo inverse
int modInverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) return x;
    }
    return -1;
}

// Fuqizimi modular (a^b % c)
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    // Hapat e gjenerimit të çelësave
    int p = 61; // Numër i thjeshtë
    int q = 53; // Numër i thjeshtë
    int n = p * q; // Moduli
    int phi = (p - 1) * (q - 1); // Totienti
    int e = 17; // Eksponent publik (zgjedhur)
    
    while (gcd(e, phi) != 1) e++; // Gjej e që është relativisht prim me phi

    int d = modInverse(e, phi); // Eksponent privat
    if (d == -1) {
        cout << "Nuk mund të gjendet invers modular." << endl;
        return 1;
    }

    cout << "Çelësi publik: (" << e << ", " << n << ")" << endl;
    cout << "Çelësi privat: (" << d << ", " << n << ")" << endl;

    // Prano mesazhin nga përdoruesi
    string message;
    cout << "Vendosni mesazhin që dëshironi të enkriptoni: ";
    getline(cin, message);

    vector<long long> encryptedMessage;

    // Enkriptimi i mesazhit
    for (char c : message) {
        if (c == ' ') {
            encryptedMessage.push_back(-1); // Ruaj hapësirat si -1
        } else {
            encryptedMessage.push_back(modExp((int)c, e, n)); // Enkripto çdo karakter
        }
    }

    cout << "Mesazhi i enkriptuar: ";
    for (auto val : encryptedMessage) {
        if (val == -1)
            cout << " ";
        else
            cout << val << " ";
    }
    cout << endl;

    // Dekriptimi i mesazhit
    string decryptedMessage = "";
    for (auto val : encryptedMessage) {
        if (val == -1) {
            decryptedMessage += " "; // Rikupero hapësirën
        } else {
            decryptedMessage += (char)modExp(val, d, n); // Dekripto çdo karakter
        }
    }

    cout << "Mesazhi i dekriptuar: " << decryptedMessage << endl;

    return 0;
}
