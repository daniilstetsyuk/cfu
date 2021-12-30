#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long double const E = 1e-9;

double Ax,Ay,Bx,By,Cx,Cy;
long double distanceBA, distanceCA;

int main() {
    cin >> Ax >> Ay;
    cin >> Bx >> By; 
    cin >> Cx >> Cy;
    
    distanceBA = sqrt(pow(Bx-Ax,2)+pow(By-Ay,2));
    distanceCA = sqrt(pow(Cx-Ax,2)+pow(Cy-Ay,2));
    
    if(distanceCA-E < distanceBA && distanceBA < distanceCA+E){
        cout << "equal" << endl;
        cout << fixed << setprecision (9) << distanceCA;
    } else if (distanceBA >= distanceCA+E){
        cout << "C" << endl;
        cout << fixed << setprecision (9) << distanceCA;
    }else if (distanceBA <= distanceCA-E){
        cout << "B" << endl;
        cout << fixed << setprecision (9) << distanceBA;
    }
}