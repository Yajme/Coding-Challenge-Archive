#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int mid = (size + 2 )/ 2;
    system("cls");
    for (int i = 0; i < size+2; i++) {//row
        for (int j = 0; j < size+2; j++) {//col
            if ((i == 0 || i==size+1)) {///first and last row
                if (j == 0 || j == size + 1) {
                    cout << "+";
                }
                else if (j > 0 && j <= size) {
                    cout << "-";
                }
            }
            else if (i>0 && i<=size) {//the rest of the row
                if (j == 0 || j == size + 1) {// edge
                    cout << "|";
                }
                else if (j!=mid){ // if j is not middle
                    if ((j > mid && i < mid) || (i > mid && j < mid )) { 
                        if (j + i == size + 1) {
                            cout << "/";
                        }
                        else {
                            cout << " ";
                        }
                    }
                    else if((j < mid && i < mid) || (j>mid && i>mid )) {
                        if (j == i) {
                            cout << "\\";
                        }
                        else {
                            cout << " ";
                        }
                    }
                    else{
                        cout << " ";
                    }
                }
                else if (j == mid && i==mid) {
                    cout << "+";
                }
                else {
                    cout << " ";
                }
            } 
        }
        cout << endl;
    }

    return 0;
}
