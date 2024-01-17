#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    int n;
    cin >> x >> y >> n;
    int array[x][y];

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            array[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for ( ; x1 < x2; x1++){
            for(int j = y1; j < y2; j++){
                array[x1][j] = 1;
            }
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }

    int count = 0;
    for (int i = 0; i < x; i++){
        for (int hui = 0; hui < y; hui++){
            if (array[i][hui] == 0) count++;
        }
    }
    cout << endl << count;
}