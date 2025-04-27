#include <iostream>
using namespace std;

int main() {
    char s[5];   // only space for 4 letters + '\0' (null character)

    cout << "Enter text: ";
    cin >> s;    // normal cin (NO size check)

    cout << "You entered: " << s << endl;

    return 0;
}
