#include <iostream>
#include <string>
using namespace std;

class Pessoa {
    private:
        string nome;
        int idade;
        string telefone;

    public:
        Pessoa(string n){
            setNome(n);
        }

        Pessoa(string n, int i, string t){
            setNome(n);
            setIdade(i);
            setTelefone(t);
        }
        void setNome(string n){
            nome = n;
        }

        void setIdade(int i){
            idade = i;
        }

        void setTelefone(string t){
            telefone = t;
        }

        string getNome(){
            return nome;
        }

        int getIdade(){
            return idade;
        }

        string getTelefone(){
            return telefone;
        }

};

int main(){

    Pessoa p1("Amaro", 22, "11111-1111");
    Pessoa p2("Apollo", 20, "22222-2222");
    Pessoa p3("Thor");
    p3.setIdade(3);
    p3.setTelefone("11122-2222");


    cout << p1.getNome() << " tem " << p1.getIdade() << " e seu telefone eh " << p1.getTelefone()<< endl;
    cout << p2.getNome() << " tem " << p2.getIdade() << " e seu telefone eh " << p2.getTelefone()<< endl;
    cout << p3.getNome() << " tem " << p3.getIdade() << " e seu telefone eh " << p3.getTelefone()<< endl;



    return 0;
}


