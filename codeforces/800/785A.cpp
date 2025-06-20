#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s[n];
    int face = 0;
    for(int i = 0; i<n; i++) {
        cin>>s[i];
        if(s[i]=="Tetrahedron") face = face + 4;
        else if(s[i]=="Cube") face = face + 6;
        else if(s[i]=="Octahedron") face = face + 8;
        else if(s[i]=="Dodecahedron") face = face + 12;
        else face = face + 20;
    }
    cout<<face<<'\n';
    return 0;
}