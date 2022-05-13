#include <iostream>
#include <vector>
#include <cmath>
#define ll long long

double distancia(ll x1, ll y1, ll x2, ll y2);
ll power(ll b, ll e);

int main() {
    ll n;
    std::cin >> n;
    std::vector<std::pair<ll, ll>> p;

    for (ll i = 0; i < n; i++) {
        ll xi, yi;
        std::cin >> xi >> yi;
        std::pair<ll, ll> coordinates = {xi, yi};
        p.push_back(coordinates);
    }

    //Prlling
    /*
    for (ll i = 0; i < n; i++) {
        std::cout << p[i].first << " " << p[i].second << "\n";
    }
    */
    //Testing distancia
    //std::cout << distancia(2, 3, 4, 5) << "\n";
    
    ll total = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            for (ll k = j+1; k < n; k++) {
                if((p[j].first-p[i].first)*(p[k].second-p[i].second)-(p[k].first-p[i].first)*(p[j].second-p[i].second)!=0){total++;}
            }
        }
    }
    std::cout << total << "\n";
    //std::cout << distancia(333333333, -333333333, -9, -1);
    return 0;   
}

double distancia(ll x1, ll y1, ll x2, ll y2) {
    double dist = pow((power((x1-x2), 2) + power((y1-y2), 2)), 0.5);
    return dist;
}

ll power(ll b, ll e) {
    if (e == 0) return 1;
    if (e == 1) return b;
    ll tmp = power(b, e/2);
    if (e % 2 == 0) return tmp*tmp;
    return tmp*tmp*b;
}