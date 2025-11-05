#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<float> pippo {2,3.7,1.9,15,6.2,9.7};
    sort(pippo.begin(), pippo.end());
    
    cout<<"vettore ordinato: ";
    for(float x :pippo) {
        cout<<x<<" ";
    }
}