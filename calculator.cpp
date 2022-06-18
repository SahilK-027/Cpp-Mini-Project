using namespace std;
#include<iostream>
#include<math.h>
#define Pi 3.142
class ArithmeaticValue
{
 public:
  float value1,value2;
  void values()
  {
  cout<<"Enter the first digit : ";
  cin>>value1;
  cout<<"Enter the second digit : ";
  cin>>value2;
 }
};
class Arithmatic_calculation : public ArithmeaticValue
{
 public:
  
 float result;
  void operation(int val)
  {
   
  switch (val)
  {
  case 1:
  result = value1 + value2;
  break;
  case 2:
  result = value1 / value2;
  break;
  case 3:
  result = value1 * value2;
  break;
  case 4:
  result = value1 - value2;
  break;
  default:
   cout<<"Wrong Entry.";
  }
 }
 void display()
 {
  cout<<"Result : "<<result<<endl;
   }
};
class TrignometricValue
{
 public:
  int angle;
  void angles()
  {
  cout<<"Enter the angle: ";
  cin>>angle;
 }
};
class Trignometric_calculation : public TrignometricValue
{
 public:
 float result;
  void operation(int val)
  {
   
  switch (val)
  {
  case 1:
  result = sin(angle) ;
  break;
  case 2:
  result = cos(angle);
  break;
  case 3:
  result = tan(angle);
  break;

  default:
   cout<<"Wrong Entry.";
  }
 }
 void display()
 {
  cout<<"Result : "<<result<<endl;
   }
};
class logarithmicValue
{
 public:
  int number;
  void numbers()
  {
  cout<<"Enter the number to find log: ";
  cin>>number;
 }
};
class Logarithmic_calculation : public logarithmicValue{
 public:
 float result;
  void operation(int val)
  {
   
  switch (val)
  {
  case 1:
  result = log(number) ;
  break;
  case 2:
  result = log10(number);
  break;
  default:
   cout<<"Wrong Entry.";
  }
 }
 void display()
 {
  cout<<"Result : "<<result<<endl;
 }
};
class UnaryValue
{
 public:
  int numb,power;
  void number()
  {
  cout<<"Enter the number to find power: ";
  cin>>numb;
 }
 void Power()
{
cout<<"Enter the exponent ";
cin>>power;
}
};
class Exponent_calculation : public UnaryValue
{
    char ans;
 public:
 float result;
  void operation(int val)
  {

  switch (val)
  {
  case 1:
  result = pow(numb,power);
  break;
  case 2:
  result = sqrt(numb);
  break;
  default:
  cout<<"Wrong Entry.";
   break;
  }
}
void display()
{
  cout<<"Result : "<<result<<endl;
 }
};

int main()
{
    int choice,choice2,choice3,choice4;
Arithmatic_calculation calc;
Trignometric_calculation calc2;
Logarithmic_calculation calc3;
Exponent_calculation calc4;
    cout<<"What do you want to perform\n";
    cout<<"1) Arithmatic Operations\n";
    cout<<"2) Trigonometric Oprerations\n";
    cout<<"3) Logarithmic Operations\n";
    cout<<"4) Powers\n";
    cout<<"5) Exit\n";
    cout<<"Enter your choice"<<endl;
    int num;
    cin>>num;
    if (num==1)
    {
        calc.values();
        cout<<"Enter\n'1' for addition\n'2' for division\n'3' for multiplication\n'4' for subtraction";
        cout<<"\nEnter the choice: ";
        cin>>choice;
        calc.operation(choice);
        calc.display();
    }
    if (num==2)
    {
        calc2.angles();
        cout<<"Enter\n'1' for sin\n'2' for cos\n'3' for tan\n";
        cout<<"\nEnter the choice: ";
        cin>>choice2;
        calc2.operation(choice2);
        calc2.display();
    }
    if (num==3)
    {
        calc3.numbers();
        cout<<"Enter\n'1' for natural log\n'2' common log";
        cout<<"\nEnter the choice: ";
        cin>>choice3;
        calc3.operation(choice3);
        calc3.display();
    }
    if (num==4)
    {
        calc4.number();
        calc4.Power();
        cout<<"Enter\n'1' for finding power\n'2' for square root\n";
        cout<<"\nEnter the choice: ";
        cin>>choice4;
        calc4.operation(choice4);
        calc4.display();
    }
    if (num==5)
    {
        return 0;
    }
 }
