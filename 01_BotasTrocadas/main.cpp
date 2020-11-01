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
    cout << "---------------" << nEl << "-----------------" << endl;
}

void solve(vector<Sapato> sap, int nEl, int * res){
    int elements = nEl;
    for(int i = 0; i < nEl; i++){
        if((sap[0].tamanho == sap[i].tamanho) && (sap[0].lado != sap[i].lado)){
            sap.erase(sap.begin() + i);
            sap.erase(sap.begin());
            *res = *res + 1;    
            elements-=2;
            if(elements >= 2) {
                //print(sap, elements);
                solve(sap, elements, res);
            }
            break;
        }
    }
}

int main(){
    int nSapatos, tam, resposta = 0;
    int *res;
    res = &resposta;
    char pe;
    vector<Sapato> shoe;
    
    cin >> nSapatos;

    for(int i = 0; i < nSapatos; i++) {
        cin >> tam;
        cin >> pe;
        shoe.push_back(Sapato{tam, pe});
    }

    solve(shoe, nSapatos, res);

    cout << resposta << endl;

    return 0;
}