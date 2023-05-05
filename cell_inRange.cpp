#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> vect1{1, 2, 3, 4}; 
  
    // Declaring new vector 
    vector<int> vect2; 
  
    // Using assignment operator to copy one 
    // vector to other 
    vect2 = vect1; 
    for(int i= 0;i<vect2.size();i++){
        cout<<vect2[i]<<" ";
    }
     
    return 0;
}
