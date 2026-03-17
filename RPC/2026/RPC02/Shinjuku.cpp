#include <iostream>
#include <vector>
#include <string>
#include <climits>
using namespace std;

// Convierte "HH:MM:SS" a segundos
int toSeconds(const string& t) {
    int hh = stoi(t.substr(0, 2));
    int mm = stoi(t.substr(3, 2));
    int ss = stoi(t.substr(6, 2));
    return hh * 3600 + mm * 60 + ss;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arrivals(n), departures(m);
    string t;

    // Leer llegadas
    for (int i = 0; i < n; i++) {
        cin >> t;
        arrivals[i] = toSeconds(t);
    }

    // Leer salidas
    for (int i = 0; i < m; i++) {
        cin >> t;
        departures[i] = toSeconds(t);
    }

    int s;
    cin >> s;

    int ans = INT_MAX;

    // Probar todas las combinaciones
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int wait = departures[j] - arrivals[i];
            if (wait >= s) {
                ans = min(ans, wait);
            }
        }
    }

    if (ans == INT_MAX) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}