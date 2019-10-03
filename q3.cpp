#include <iostream>
using namespace std;
struct employee{
  string name;
  int age;
  string designation;
  int salary;

};
void func(employee company[2])
{
  for(int i=0;i<2;i++)
  {
    cout<<"Name:";
    cin>> company[i].name;
    cout<<"age:";
    cin>> company[i].age;
    cout<<"designation:";
    cin>> company[i].designation;
    cout<<"Salary:";
    cin>> company[i].salary;
  }
  cout<<endl;
  for(int i=0;i<2;i++)
  {
    cout<<"Name:";
    cout<< company[i].name<<endl;
    cout<<"age:";
    cout<< company[i].age<<endl;
    cout<<"designation:";
    cout<< company[i].designation<<endl;
    cout<<"Salary:";
    cout<< company[i].salary<<endl;
  }
}
int main()
{

    employee company[2];

   func(company);


}
