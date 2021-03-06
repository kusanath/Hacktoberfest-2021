CR, [20.10.21 13:45]
/*C program to declare a union containing 5 string variables (Name, House Name, City Name, State and Pincode) each with a length of C_SIZE (user defined constant).
Then, read and display the address of a person using a variable of the union.
NAME: SHERIN ALOSIOUS
ROLL NO: 37
CLASS: EC-B*/
#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
       char name[C_SIZE];
       char hname[C_SIZE];
       char cityname[C_SIZE];
       char state[C_SIZE];
       char pin[C_SIZE];
};

int main()
{
    union Address record1;
  
    printf("Enter name:");
    scanf("%[^\n]",record1.name);
    getchar();
    printf("Enter house name:");
    scanf("%[^\n]",record1.hname);
    getchar();
    printf("Enter city name:");
    scanf("%[^\n]",record1.cityname);
    getchar();
    printf("Enter state name:");
    scanf("%[^\n]",record1.state);
    getchar();
    printf("Enter pin:");
    scanf("%[^\n]",record1.pin);

    printf("....Union record1 values ....\n");
    printf(" Name         : %s \n", record1.name);
    printf(" House Name  : %s \n", record1.hname);
    printf(" City Name    : %s \n", record1.cityname);
    printf(" State name   : %s \n", record1.state);
    printf(" Pin          : %s \n\n", record1.pin);
  return 0;  
 }
