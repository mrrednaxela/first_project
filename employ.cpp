#include <iostream>
using namespace std;

class Employ
{
    public:
    
    Employ()
    {
        
    }
    
    Employ(unsigned short itsAge, float itsServise, unsigned int itsSalary)
    {
        age=itsAge;
        yearOfServise=itsServise;
        salary=itsSalary;
    }
    
    
      unsigned short getAge()
      {
          return age;
      };
      void setAge(unsigned short itsAge)
      {
          age=itsAge;
      };
      
      
      
      short getYearOfServise()
      {
          return yearOfServise;
      };
      void setYearOfServise(float itsServise)
      {
         yearOfServise=itsServise;
      };
      
      
      unsigned int getSalary()
      {
          return salary;
      };
      void setSalary(unsigned int itsSalary)
      {
          salary=itsSalary;
      };
      
    
    void enter()
    {
        unsigned short age;
        float servise;
        unsigned int salary;
        cout<<"Enter the year person: \t"; 
        cin>>age;
        setAge(age);
        
        
        cout<<"Enter the year of servise person: \t";
        cin>>servise;
        setYearOfServise(servise);
        
        
        cout<<"Enter the salary person: \t";
        cin>>salary;
        setSalary(salary);
    };
      
      
    void print()
    {
        cout<<"Person 1 "<<age<<", already working "<<yearOfServise<<" years and his salary is "<<salary<<endl<<endl;
    }
    
    unsigned int roundingSalary()
    {
        if(salary<1000) return salary;
        
        if(salary%1000<500) return salary-salary%1000;
        
        return (salary-salary%1000)+1000;
    }
     
    
    private:
      unsigned short age;
      float yearOfServise;
      unsigned int salary;
};