#include <iostream>
#include <sstream>
#include <string>
using namespace std; 
   
int main() 
{ 
    string str = "Renu Sreeja"; 
     
    stringstream s(str);  
    string word; 
   
    int count = 0; 
    while (s >> word) 
        count++;
         
    cout << "Number of words in given string are: " << count; 
    return 0; 
}

