

#include<iostream>
#include<vector>
using namespace std;

void rightRotate(vector<int>&v, int st){
    int n=v.size();
    st= st % n;
    vector<int>b(n);
    for(int i=0; i<n; i++){
        b[(i + st) % n] = v[i];
    }
    cout<<"Right Rotated array : ";
    for(int val : b) cout << val << " ";
    cout << endl;
}

void leftRotate(vector<int> &v, int st){
    int n=v.size();
    st= st % n;
    vector<int>b(n);
    for(int i=0; i<n; i++){
        b[i]= v[(i + st) % n];
    }
    cout<<"Left Rotated array : ";
    for(int val : b) cout <<val << " ";
    cout << endl;
}

int main(){
    vector<int>v = {1, 2, 4, 5, 6};
    int st;
    cout<< "Enter steps to rotate: ";
    cin >> st;

    leftRotate(v, st);
    rightRotate(v, st);

    return 0;
}