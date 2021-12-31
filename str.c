#include<stdio.h>
struct Student
{
     char name[20];
     int rollno;
     int marks;
};
void main()
{
struct Student s;
printf("Enter name\n");
fgets(s.name,20,stdin);
printf("Enter roll number\n");
scanf("%d",&(s.rollno));
printf("Enter marks");
scanf("%d",&(s.marks));
printf("Name %s",s.name);
printf("Rollno %d",s.rollno);
printf("marks %d",s.marks);
}