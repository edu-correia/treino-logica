#include <iostream>

using namespace std;

int main(){
    int nPositions, disco, aviao;

    cin >> nPositions >> disco >> aviao;
    if(aviao > disco) cout << nPositions - aviao + disco << endl;
    else cout << disco - aviao << endl;

    return 0;
}