#include <iostream>
using namespace std; //não vou precisar mais usar o std::cout e o std::endl, apenas o cout e endl
//
int main() {
    std::cout << "******************* \n "
                 "Bem vindos ao jogo da adivinhação!\n"
                 "********************" << std::endl;
    const int numero_secreto = 42;
    //cout<<"O número secreto é "<< numero_secreto <<" Não conte para ninguém!"<<endl;



    int chute;
    cout<<"qual o seu chute?";
    cin >> chute;
    cout<<"o valor do seu chute é"<< chute<<endl;
    bool acertou = chute == numero_secreto; // variável booleana
    bool maior = chute > numero_secreto;

    if(acertou){
        cout<<"parabéns você acertou o número secreto!!"<<endl;
    } else if (maior){
    cout<<"seu chute foi maior que o número secreto"<<endl;
    }
    else{
        cout<<"seu chute foi menor que o número secreto"<<endl;
    }
    return 0;
}
