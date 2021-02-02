#include <stdio.h>

struct student{

int id;
char name[20];
int age;
float cgpa;

};

int main(){

//struct student st = { 101 , "pony" , 25 , 3.10 };

struct student st;

printf("Enter your id: ");
scanf("%d", &st.id);

printf("Enter your name: ");
scanf("%s", st.name);

printf("Enter your age: ");
scanf("%d", &st.age);

printf("Enter your cgpa: ");
scanf("%f", &st.cgpa);

printf("ID: %d\n", st.id);
printf("Name: %s\n", st.name);
printf("Age: %d\n", st.age);
printf("CGPA: %.2f\n", st.cgpa);

}
