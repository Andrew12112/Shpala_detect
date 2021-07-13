#include <iostream>

using namespace std;

void Test(string Count1,string Count2,string Count3,string result1,string result2){
    int age, wight;
    
    string Resultname, Resultage, Resultwight;
    std::cout << Count1 << std::endl;
    std::cin >> Resultname;
    
    std::cout << Count2 << std::endl;
    std::cin >> age;
    
    std::cout << Count3 << std::endl;
    std::cin >> wight;
    
    if (age > 18){
        Resultage = result1;
    }
    
    if (wight > 180){
        Resultwight = result2;
    }
    
    cout << "Ваше имя: " << Resultname << "\n";
    cout << "Возраст:  " << age << "\n";
    cout << "Рост: " << wight << "\n";
    cout << Resultage << "\n";
    cout << Resultwight << "\n";
} 

int main(){
    Test("Имя пожалуйста:", "Возраст пожалуйста:", "Рост пожалуйста:", "Старый", "Шпала ебать");
}
