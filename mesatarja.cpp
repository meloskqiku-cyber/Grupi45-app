#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>notat;
    int n, nota;

    cout<<"Sa nota do t'i japesh?";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Nota #"<<i+1<<": ";
        cin>>nota;
        notat.push_back(nota);
    }

    int shuma=0;
    for(int i=0;i<n;i++){
        shuma+=notat[i];
    }

    double mesatarja=double(shuma)/n;
    cout<<"Mesatarja e notave eshte: "<<mesatarja<<endl;

    return 0;
}