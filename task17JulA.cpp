#include<iostream>
#include<string>
int main()
{
int id;
std::string name;
double physics;
double chemistry;
double computer;
std::cout << "Enter your ID :\n";
std::cin >> id ;
std::cout << "Enter your name :\n";
std::cin >> name ;
std::cout << "enter the mark of Physics :\n";
std::cin >> physics;
std::cout << "Enter the markd of Chemistry :\n";
std::cin >> chemistry;
std::cout << "Enter the markd of Computer application :\n";
std::cin >> computer;

std::cout << "your id : " << id << std::endl << "your name : " << name << std::endl
          << " your marks in physics and chemistry and computer application  : "<< std::endl
          << physics << std::endl << chemistry << std::endl << computer << std:: endl;


double total = physics+chemistry+computer ;
double average = total/3;
std::cout << "the total marks is :" << " "<<total << std::endl;
std::cout << "your average : "<<average;



return 0;    
}