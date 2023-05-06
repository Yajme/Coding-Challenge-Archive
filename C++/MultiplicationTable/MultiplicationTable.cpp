
#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> multiplication_table(int n) {
    vector<vector<int>> row;
    vector<int> col;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            col.push_back((i + 1)* (j+1));
        }
        row.push_back(col);
        col.clear();
    }
    return row;
}
int main()
{
    int n;

    cin >> n;
    vector<vector<int>> product = multiplication_table(n);

    for (int i = 0; i < product.size(); i++) {
        for (int j = 0; j < product[i].size(); j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }
}


