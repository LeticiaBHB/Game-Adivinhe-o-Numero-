#include <iostream>
using namespace std; //não vou precisar mais usar o std::cout e o std::endl, apenas o cout e endl
//
int main() {
    std::cout << "******************* \n "
                 "Bem vindos ao jogo da adivinhação!\n"
                 "********************" << std::endl;
    const int NUMERO_SECRETO = 42; // variável sempre letra maiuscula
    //cout<<"O número secreto é "<< numero_secreto <<" Não conte para ninguém!"<<endl;

    bool nao_acertou = true;

    while(nao_acertou){
        int chute;
        cout<<"qual o seu chute?";
        cin >> chute;
        cout<<"o valor do seu chute é"<< chute<<endl;
        bool acertou = chute == NUMERO_SECRETO; // variável booleana
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout<<"parabéns você acertou o número secreto!!"<<endl;
            nao_acertou = false;
        } else if (maior){
            cout<<"seu chute foi maior que o número secreto"<<endl;
        }
        else {
            cout << "seu chute foi menor que o número secreto" << endl;
        }
    }
    cout <<"Fim de jogo!"<<endl;

}
