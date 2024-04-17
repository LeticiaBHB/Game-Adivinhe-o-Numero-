#include <iostream>
using namespace std; //não vou precisar mais usar o std::cout e o std::endl, apenas o cout e endl

int main() {
    std::cout << "******************* \n "
                 "Bem vindos ao jogo da adivinhação!\n"
                 "********************" << std::endl;
    int numero_secreto = 42;
    //cout<<"O número secreto é "<< numero_secreto <<" Não conte para ninguém!"<<endl;

    int chute;
    cout<<"qual o seu chute?";
    cin >> chute;
    cout<<"o valor do seu chute é"<< chute<<endl;

    if(chute == numero_secreto){
        cout<<"parabéns você acertou o número secreto!!"<<endl;
    } else if (chute > numero_secreto){
    cout<<"seu chute foi maior que o número secreto"<<endl;
    }
    else{
        cout<<"seu chute foi menor que o número secreto"<<endl;
    }
    return 0;
}
