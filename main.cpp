#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compra, atrasos, TipoPagamento;
    double TicketMedio, score, pontos;

    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" << endl;
    cout << "INFORME OS DADOS DO ULTIMO" << endl << endl;

    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> compra;
    cout << "Qual o ticket medio? ";
    cin >> TicketMedio;

    cout << endl << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> atrasos;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> TipoPagamento;

    if (score == 0){
        pontos = 0;
    }
    else if (score > 3000){
        pontos = 20;
    }
    else if (score == 3000){
        pontos = 40;
    }
    else {
        pontos = 60;
    }

    cout << endl <<"Score de volume de compras = " << pontos << " pontos" << endl;

    return 0;
}
