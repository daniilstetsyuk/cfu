#include <iostream>

using namespace std;
char field[10][10];

void BattleField(char field[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            field[i][j] = '`';
    }
}

void UI(char field[10][10]) {
    cout << "  ";
    for (int i = 1; i < 11; i++)
        cout << i << " ";
    for (int i = 0; i < 10; i++)
        cout << " ";
    cout << "\n";
    for (int i = 0; i < 10; i++) {
        if (i == 9)
            cout << (i + 1) << " ";
        else
            cout << (i + 1) << "  ";
        for (int j = 0; j < 10; j++) {
            cout << field[i][j] << " ";
        }
        cout << "\n";
    }

}

int main() {
    
    BattleField(field);
    UI(field);

    


}
