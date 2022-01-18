#include <iostream>
using namespace std;



class Instrument {
public:
    void wydajDzwiek(){
        std::cout<<"to jest instrument: ";
    }
};


class Werbel :public Instrument {
public:

    void wydajDzwiek(){
        Instrument::wydajDzwiek();
        std::cout<<"WERBEL";
        std::cout<<"  robi  brbrbrbrb"<<std::endl;
    }


};

class Trabka : public Instrument{
public:
    void wydajDzwiek(){
        Instrument::wydajDzwiek();
        std::cout<<"TRABKA";
        std::cout<<"  robi  tururururu"<<std::endl;
    }


};


class Fortepian : public Instrument {
public:
    void wydajDzwiek() {
        Instrument::wydajDzwiek();
        std::cout << "FORTEPIAN";
        std::cout << "  robi  wiuiuiwuiw" << std::endl;
    }
};


void Muzyk(Instrument &powierzonyInstruyment){
    std::cout << powierzonyInstruyment.wydajDzwiek()<<std::endl;
}


int main() {
    //werbel
    Werbel wer;
    wer.wydajDzwiek();
    Werbel *wer1;
    wer1->wydajDzwiek();

    //Trabka
    Trabka tra;
    tra.wydajDzwiek();
    Trabka *tra1;
    tra1->wydajDzwiek();

    //Fortepian
    Fortepian fort;
    fort.wydajDzwiek();
    Fortepian *fort1;
    fort1->wydajDzwiek();

    Muzyk(wer1);
    Muzyk(tra1);
    Muzyk(fort1);


    return 0;
}
