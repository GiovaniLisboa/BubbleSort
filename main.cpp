#include <stdlib.h>
#include <iostream>
#include <time.h>

using std:: cout;
using std:: cin;

void aleatorio(int &); // Função para definir os números aleatoriamente
bool trocar (int &, int &); // Função para trocar inteiros
bool trocar (double &, double &); // Função para trocar double

int main(int argc, char **argv)
{
    srand (time(NULL)); //Redefine os números aleatórios a cada execução
    
    int tamanho = 0; //Tamanho do vetor
    int cont = 0; //Contador de trocas
    bool teste; //Teste para minimizar o número de iterações
    
    while (tamanho < 2 || tamanho > 20) //Entrada do tamanho do vetor pelo usuário
    {
        cout << "Insira o tamanho do vetor (min: 2 // max: 20): ";
        cin >> tamanho;
        cout << "\n";
    }
    
    int vetor[tamanho]; //Vetor
    
    for (int i = 0; i < tamanho; i++) //Loop de repetição para definir os valores das células
    {
        aleatorio (vetor[i]);
        cout << "A[" << i+1 << "]: " << vetor[i] << "\n";
    }

    cout << "\n";

    while (teste == false) //Loop de teste para verificar se o vetor está em ordem (Só precisa executar no mínimo uma vez)
    {
        teste = true;
        for (int i = 0; i < tamanho - 1; i++) //Repetição para trocar os valores
        {
            if (trocar(vetor[i], vetor[i+1]))
            {
                cont++;
                teste = false;
            }
        }
    }
        
    cout << "Trocas: " << cont << "\n"; //Informa o número de trocas
    cout << "\n";
    for (int i = 0; i < tamanho; i++) //Escreve o vetor
    {
        cout << "A[" << i+1 << "]: " << vetor[i] << "\n";
    }
    
    cout << "\n";
    return 0;
}

//FUNÇÕES

void aleatorio (int &x)
{
    x = (rand() % 20);
}

bool trocar (int &x, int &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}

bool trocar (double &x, double &y)
{
    int temp;
    
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else return false;
}