#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int vente{0}; //an int for the sales
    vector<int> salaries; //I use a dynamic table, because the idea to calcul salary but not to save the result was a bit strange for me.
    int salary{0};

    while(vente >= 0) //This while loop allows the user to enter the total of sales, and to get the salary of each salesman
        {
            cout << "\nEnter gross sales : ";
            cin >> vente;

            salary = 150 + (12*vente)/100;
            salaries.push_back(salary);
        }
    for(int i = 0; i < salaries.size(); i++)
        {
            cout << salaries[i] << endl;
        }
}


//https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1896212-manipulez-les-tableaux
