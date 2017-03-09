#include <iostream>
#include <string>

using namespace std;

class Invoice{
public:
	int num, qtd;
    float preco;
	string desc;
    Invoice(int num, string desc, int qtd, float preco): num(num), desc(desc), qtd(qtd), preco(preco){}

    int getNum() const {
        return num;
    }

    void setNum(int num) {
        Invoice::num = num;
    }

    int getQtd() const {
        return qtd;
    }

    void setQtd(int qtd) {
        Invoice::qtd = qtd;
    }

    float getPreco() const {
        return preco;
    }

    void setPreco(float preco) {
        Invoice::preco = preco;
    }

    const string &getDesc() const {
        return desc;
    }

    void setDesc(const string &desc) {
        Invoice::desc = desc;
    }

    float getInvoiceAmount(){
        if(this->qtd < 0){
            this->qtd==0;
        }

        if(this->preco < 0)
            this->preco==0.0;


        return this->qtd*this->preco;
    }

};

int main(){

//    Invoice i(13, "Coisa", 1, 150);


    int num, qtd;
    string desc;
    float preco;

    cout << "Digite o numero do produto: ";
    cin >> num;

    cout << "Digite a descricao do produto: ";
    cin >> desc;

    cout << "Digite a quantidade do produto: ";
    cin >> qtd;

    cout << "Digite o preco do produto: ";
    cin >> preco;

    Invoice i(num, desc, qtd, preco);

    i.setNum(num);
    i.setDesc(desc);
    i.setQtd(qtd);
    i.setPreco(preco);


    cout << "Codigo: " << i.getNum() << " Produto: " << i.getDesc() << " Quantidade: "  << i.getQtd() << " Preco: " << i.getPreco() << endl;

    cout << "O preco da fatura eh de: " << i.getInvoiceAmount() <<endl;

	return 0;
}
