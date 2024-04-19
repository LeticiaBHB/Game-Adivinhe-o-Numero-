#include <iostream>
#include <cstdlib> //biblioteca padrão que tem a função rand
#include <ctime>
using namespace std; //não vou precisar mais usar o std::cout e o std::endl, apenas o cout e endl
//
int main() {
    std::cout << "******************* \n "
                 "Bem vindos ao jogo da adivinhação!\n"
                 "********************" << std::endl;

    cout<<"Escolha seu nível de dificuldade"<<endl;
    cout<<"Fácil (F), Médio (M) ou Difícil (D)"<<endl;
    char dificuldade;
    cin >> dificuldade; //cin é para ler

    int numero_de_tentativas;
    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    } else if (dificuldade == 'M'){
        numero_de_tentativas = 10;
    } else {
        numero_de_tentativas = 5;
    }

    srand(time(0));//essa função define a semente dos numeros aleatórios
    //time 0 ou time null
    int NUMERO_SECRETO = rand() % 100; // variável sempre letra maiuscula
    //cout<<"O número secreto é "<< numero_secreto <<" Não conte para ninguém!"<<endl;
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000.0;

    for(tentativas = 1; tentativas <=numero_de_tentativas; tentativas++){ // vai somar mais um
        //tentativas = tentativas +1; // ou tentativas++  //não precisa mais no for, pq está dentro do laço
        int chute;
        cout<<"Tentativas "<< tentativas<<endl;
        cout<<"qual o seu chute?";
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0; //abs é valor absoluto,vai dar positivo
        pontos = pontos - pontos_perdidos;

        cout<<"o valor do seu chute é"<< chute<<endl;
        bool acertou = chute == NUMERO_SECRETO; // variável booleana
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout<<"parabéns você acertou o número secreto!!"<<endl;
            nao_acertou = false;
            break;
        } else if (maior){
            cout<<"seu chute foi maior que o número secreto"<<endl;
        }
        else {
            cout << "seu chute foi menor que o número secreto" << endl;
        }
    }
    cout <<"Fim de jogo!"<<endl;
    if (nao_acertou){
        cout<<"você perdeu! tente novamente!"<<endl;
    }else{
        cout <<"Você acertou o número secreto em "<<tentativas<<" tentativas"<<endl;
        cout.precision(2); //é a precisão com 2 casas depois da virgula
        cout << fixed; //modificador de saida. ele vai fixar a virugla no final do numero
        cout <<"sua pontuação foi de "<<pontos<<" pontos"<<endl;
    }

}
