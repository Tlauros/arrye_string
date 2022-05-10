#include <iostream>
#include <string>
using namespace std;
int main()
{
    string Name;
    cout << "enter your fullname :";
    getline(cin, Name);
    int i;
    cout << "start \n";
    cout << "----------------------------------------------------- \n";
    for ( i = 0; i < Name.size(); i++){
        cout << i << " -> ";
        cout << Name[i] << endl; 
    }
    cout << "----------------------------------------------------- \n";
    cout << "finish";

    return 0;
}
