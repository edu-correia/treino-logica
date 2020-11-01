#include <iostream>
#include <vector>

using namespace std;

struct sapato
{
    int tamanho;
    char lado;
};

typedef struct sapato Sapato;

void print(vector<Sapato> sap, int nEl){
    for(int i = 0; i < nEl; i++) {
        cout << sap[i].tamanho << sap[i].lado << endl;
    }
    cout << "--------------------------------" << endl;
}

void solve(vector<Sapato> sap, int nEl){
    int elements = nEl;
    for(int i = 0; i < nEl; i++){
        if((sap[0].tamanho == sap[i].tamanho) && (sap[0].lado != sap[i].lado)){
            sap.erase(sap.begin() + i);
            sap.erase(sap.begin());
            elements-=2;
            print(sap, nEl-2);
            if(elements >= 2) solve(sap, nEl - 2);
        }
    }
}

int main(){
    int nSapatos, tam, *res = 0;
    char pe;
    vector<Sapato> shoe;
    cin >> nSapatos;

    for(int i = 0; i < nSapatos; i++) {
        cin >> tam;
        cin >> pe;
        shoe.push_back(Sapato{tam, pe});
    }

    solve(shoe, nSapatos);

    cout << res << endl;

    return 0;
}