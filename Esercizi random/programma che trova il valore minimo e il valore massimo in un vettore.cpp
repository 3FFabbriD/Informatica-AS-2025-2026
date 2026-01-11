#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main (){
vector <float> pippo{2.8,4.7,12,3.9,13,17,19.9,20};
auto max_it = max_element(pippo.begin(), pippo.end());
cout<<"il valore massimo e': "<<*max_it<<endl;
auto min_it = min_element(pippo.begin(), pippo.end());
cout<<"il valore minimo e': "<<*min_it<<endl;  
}