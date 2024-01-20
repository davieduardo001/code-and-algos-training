#include <bits/stdc++.h>
using namespace std;
// compinling: g++ -std=c++11 arquivo.cpp

#define vi vector<int>    // create a vetor of ints
#define ll long long      // create a long long variable
#define pb push_back      // add something to the vetor
#define mp make_pair      // generete a pair and return it
#define ii pair<int, int> // define a pair :P

int main()
{

    ///////////////
    // input e
    // output
    // estudos
    ///////////////

    cout << "Print something\n";

    int variable;
    cout << "Receiving something: ";
    cin >> variable;

    cout << "The value typed was: " << variable << "\n";

    ///////////////
    // estudos sobre
    // string
    ///////////////

    // concatenacao entre strings
    string a = "abc";
    string b = "def";

    cout << "concat strings (a+b): " << a + b << "\n";

    // comparacao entre strings
    if (a > b) // compara uma por uma dentro da tabela ASCII, ao terminar tem-se o output
        cout << "output\n";
    else
        cout << "other thing\n";

    // pair (pares ordenados)
    ii p1 = make_pair(0, 1);
    ii p2 = make_pair(1, 0);

    if (p1 > p2) // compara a primeira a esquerda, se for empate o da direita desempata
        cout << "p1\n";
    else
        cout << "p2\n";

    ///////////////
    // iterador
    // um ponteiro mais inteligente!!
    ///////////////

    int v[2] = {0, 1};
    int *p = v; // point to the the vetor position v[0]
    p++;        // agr aponta para v[1]

    ///////////////
    // tamanhos dos
    // tipos
    // int : 2^31-1 ~ 2 x 10^9
    // long long: 2^63 -1 ~ 8 x 10 ^18
    ///////////////

    ///////////////
    // funcoes uteis
    // para saber de cor
    // e utilizar
    // durante o codigo
    ///////////////

    // SWAP: ele troca o valor de duas variaveis com os mesmos valores
    int x[10];
    x[5] = 1;
    x[2] = 123;

    swap(v[5], v[3]); // x[5] = 123 && x[2] = 1

    // MIN && MAX: retorna o menor e o maior valor dentre os dois elementos, respectivamente
    int menor = min(x[5], x[2]);
    int maior = max(x[5], x[2]);

    // TO_STRING: converte o numero para string (precisa compilar junto a lib -std=c++11)
    int y = 12341;
    string str = to_string(y); // output: "12341"
    cout << "printando o numero em string: " << str << "\n";

    ///////////////
    // usando operador ternario
    // parece mais dificil dq eh
    ///////////////

    bool q = true;
    printf("%s\n", q ? "TRUE" : "FALSE"); // Se q for True, irá printar uma msg escrito "TRUE" e "FALSE" caso contrário

    ///////////////
    // inferencia de
    // tipo de forma dinamica
    ///////////////

    auto n = 5; // o compilador sabe que n é um inteiro

    ///////////////
    // utilizacao de
    // vetores
    // vetores sao definidos dinamicamente
    // enquanto arrays estaticamente!!
    ///////////////

    vector<int> vetorTest; // declaracao de um vector;

    vetorTest.push_back(3); // add something to the vetor

    int n = vetorTest.size(); // take the size of the vetor

    vector<int> v(100, 5); // inicialize o vetor com 100 posicoes, com os valores 5 dentro deles

    // utilizando begin
    // e end
    // para pegar o inicio
    // e o fim, bem util
    // para a criacao de iteradores
    // referentes ao vetor

    vector<int> vetorParaTesteDePonteiro;
    vetorParaTesteDePonteiro.pb(1);
    vetorParaTesteDePonteiro.pb(2);
    vetorParaTesteDePonteiro.pb(123);
    vetorParaTesteDePonteiro.pb(223);
    vetorParaTesteDePonteiro.pb(5321);
    vetorParaTesteDePonteiro.pb(213);
    vector<int>::iterator i = vetorParaTesteDePonteiro.begin(); // i point to v[0]
    i++;                                                        // now i point to v[1]

    sort(vetorParaTesteDePonteiro.begin(), vetorParaTesteDePonteiro.end()); // agora esta ordenado por ordem crescente

    return 0;
}