#include <bits/stdc++.h>

using namespace std;

int main()
{
    int compra, atrasos, TipoPagamento;
    double TicketMedio;

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

    return 0;
}
