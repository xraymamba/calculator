#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*Not ideal
    inspired by python version by AceLewis
    https://github.com/AceLewis/my_first_calculator.py/blob/master/generator.py
    Probably a lot to improve
    Have fun!*/
    ofstream file;
    file.open("my_first_calculator.cpp");
    int i=0;
    float sum;
    char signs[4]={'+','-','/','*'};

    file<<"#include <iostream>"
        <<"\nusing namespace std;"
        <<"\nint main()"
        <<"\n{"
        <<"\t// my_first_calculator.cpp by XrayMamba"
        <<"\t\n //TODO: Make it work for all floating point numbers too"
        <<"\t\ncout<<\"Welcome to this calculator!\";"
        <<"\t\ncout<<\"\\nIt can add, subtract, multiply and divide whole numbers from 0 to 50\";"
        <<"\t\nfloat num1;"
        <<"\t\nfloat num2;"
        <<"\t\nchar sign;"
        <<"\t\ncout<<\"\\nPlease choose your first number: \";"
        <<"\t\ncin>>num1;"
        <<"\t\ncout<<\"\\nWhat do you want to do? +, -, /, or *: \";"
        <<"\t\ncin>>sign;"
        <<"\t\ncout<<\"\\nPlease choose your second number: \";"
        <<"\t\ncin>>num2;";
        for(signs[i];i<4;i++)
        {
            for(float j=0;j<51;j++)
            {
                for(float k=0;k<51;k++)
                {
                    switch(signs[i])
                    {
                    case '+':
                       sum=j+k;
                       file<<"\nif( num1 == "<<j<<" && num2 == "<<k<<" && sign == \'"<<signs[i]<<"\')"
                           <<"\n\tcout<<\""<<j<<signs[i]<<k<<"=="<<sum<<"\";";
                           break;
                    case '-':
                        sum=j-k;
                       file<<"\nif( num1 == "<<j<<" && num2 == "<<k<<" && sign == \'"<<signs[i]<<"\')"
                           <<"\n\tcout<<\""<<j<<signs[i]<<k<<"=="<<sum<<"\";";
                           break;
                    case '*':
                        sum=j*k;
                       file<<"\nif( num1 == "<<j<<" && num2 == "<<k<<" && sign == \'"<<signs[i]<<"\')"
                           <<"\n\tcout<<\""<<j<<signs[i]<<k<<"=="<<sum<<"\";";
                           break;
                    case '/':

                      sum=j/k;
                      if(k==0)
                      {
                          file<<"\nif( num1 == "<<j<<" && num2 == "<<k<<" && sign == \'"<<signs[i]<<"\')"
                           <<"\n\tcout<<\""<<j<<signs[i]<<k<<"==NaN\";";
                      }
                      else
                      {
                       file<<"\nif( num1 == "<<j<<" && num2 == "<<k<<" && sign == \'"<<signs[i]<<"\')"
                           <<"\n\tcout<<\""<<j<<signs[i]<<k<<"=="<<sum<<"\";";
                      }
                           break;


                    }

                }
            }
        }
        file<<"\ncout<<\"\\nThank you for using this calculator :)\";"
            <<"\nreturn 0;"
            <<"\n}";
        file.close();



    file.close();
    return 0;

}

