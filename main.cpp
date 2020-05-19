#include <bits/stdc++.h>

using namespace std;

int main()
{
    double compra, atrasos, TicketMedio, score, Pontos, Pontos2, Pontos3;
    string B, C, D, TipoPagamento;

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
        Pontos = 0;
    }
    else if (score > 3000 && compra <= 2){
        Pontos = 20;
    }
    else if (score == 3000 && compra >= 2){
        Pontos = 40;
    }
    else {
        Pontos = 60;
    }
    cout << endl <<"Score de volume de compras = " << Pontos << " pontos" << endl;


    if (atrasos > 1 || compra == 0){
        Pontos2 = 0;
    }
    else if (compra >= 1 && atrasos == 1){
        Pontos2 = 15;
    }
    else if (compra >= 1 && atrasos == 0){
        Pontos2 = 30;
    }
    cout << endl << endl << "Score de inadimplencia = " << Pontos2 << " pontos" << endl;

    if (compra > 0 && TipoPagamento == "D"){
        Pontos3 = 5;
    }
    if (compra > 0 && (TipoPagamento == "C" || TipoPagamento == "B")){
        Pontos3 = 10;
    }

    cout << "Score de forma de pagamento = " << Pontos3 << " pontos" << endl;


    return 0;
}
