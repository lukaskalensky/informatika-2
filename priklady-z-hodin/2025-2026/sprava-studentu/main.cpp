#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 

using namespace std;

ifstream Cti("studenti.txt");

struct Student
{
    int id;
    string jmeno;
    double prumer;
};

struct Uzel
{
    Student student;
    Uzel* uzel;
};

void ParsujRadek(const string& radek)
{
    stringstream ss(radek);
    string pole[] = find(radek.begin(), radek. end(), ",");
    Student.id =
}

int main() {
    
}