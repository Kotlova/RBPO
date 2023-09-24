#include"Lab1.h"

int main()
{
    //1 перегрузка
    string name;
    unsigned short age = 0;
    double salary = 0.0;
    ReadPersonData(name, age, salary);
    WritePersonData(name, &age, "no parametr", "no parametr", salary);

    //2 перегрузка
    unsigned short height = 0;
    string weight;
    ReadPersonData(name, age, height, weight);
    WritePersonData(name, &age, to_string(height), weight, 0.0);

    return 0;
}
