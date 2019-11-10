//Dr_T on the Struct vs. the Class
#include <iostream>
#include <string>
using namespace std; 

struct Student /// struct example
{
   int id; 
   string name;
   double credits; 
};  

class Graduate
{
	private:
		int id;
    string name; 
    double credits; 
  public:
          void setID(int);   
          int getID() const; 
          void setName(string);   
          string getName() const; 
          void setCredits(double);
          double getCredits() const; 
          double calcGPA() const; //Not a setter or getter but a member ****
} ; 

void Graduate::setID(int i)
{
     id = i;  //set the private attribute member, id to i
}

int Graduate::getID() const
{
      return id; //return the private member variable, id
}

void Graduate::setName(string n)
{
      name = n; //set the private attribute member, name to n 
}

string Graduate::getName() const 
{
	return name; //return the private member variable, name 
}

void Graduate::setCredits(double c)
{
  credits = c; 
}

double Graduate::getCredits() const
{
  return credits; //pitch from a Function *****
}

double Graduate::calcGPA() const
{
   return (credits * 4.0); //pitch from a Function *****
}





int main()
{
   
    Student s; 
    s.id = 12;
    s.name = "Tyson";
    //print the id and name of s ********
    cout << s.id << " " << s.name << endl;
   
   //instantiate Graduate g, and set its items
    Graduate g; // Graduate (Data Type) g (variable)
    g.setID(12); 
    g.setName("Jason");
    g.setCredits(130);

    //print the ID, Name, credit, and GPA of g 
    cout << g.getID() << " " << g.getName() << endl;
    cout << g.getCredits() << " GPA " << g.calcGPA() << endl;//catch from a Function ** 



   return 0;
}
