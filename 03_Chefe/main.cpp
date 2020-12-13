#include <iostream>

using namespace std;

int main(){
    int empregados, relacoes, instrucoes, tipoInst;
    int arrEmpregados[500];
    int matRelacoes[500][500];
    char matInstrucoes[500][500];

    cin >> empregados >> relacoes >> instrucoes;

    for(int i = 0; i < empregados; i++) {
        cin >> arrEmpregados[i];
    }

    for(int i = 0; i < relacoes; i++) {
        cin >> matRelacoes[i][0] >> matRelacoes[i][1];
    }

    for(int i = 0; i < instrucoes; i++) {
        cin >> matRelacoes[i][0];
        if(matRelacoes[i][0] == 'T') cin >> matInstrucoes[i][1] >> matInstrucoes[i][2];
        else cin >> matInstrucoes[i][1];
    }

    for(int i = 0; i < empregados; i++) {
        cout << arrEmpregados[i];
        cout << endl;
    }

    for(int i = 0; i < relacoes; i++) {
        cout << matRelacoes[i][0] << matRelacoes[i][1] << endl;
    }

    for(int i = 0; i < instrucoes; i++) {
        cout << matRelacoes[i][0] << matInstrucoes[i][1] << matInstrucoes[i][2];
    }
}