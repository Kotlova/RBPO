#include "Lab1.h"

void ReadPersonData(string& name, unsigned short& age, double& salary)
{
    cout << "   1 Desision  " << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
    cout << "Output of the result 1 desision:" << endl;
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, string& weight)
{
    cout << "   2 Desision" << endl;
    name = ReadPersonName();
    age = ReadPersonAge();
    height = ReadPersonHeight();
    ReadPersonWeight(weight);
    cout << "Output of the result 2 desision:" << endl;

}