#include <stdio.h>

struct Student
{
  char name[10];
  int rollNumber;
};

int main()
{
  /*
    Copying strcutue
  */

  // struct Student student1, student2;

  // printf("Enter student one details: \n");
  // scanf("%s", &student1.name);
  // scanf("%d", &student1.rollNumber);

  // student2 = student1;

  // printf("Student one: Name- %s & Roll No. - %d \n", student1.name, student1.rollNumber);
  // printf("Student one: Name- %s & Roll No. - %d \n", student2.name, student2.rollNumber);

  /*
    Compairing structure variables
  */

  // struct Student student3, student4;

  // printf("Enter student three details: \n");
  // scanf("%s %d", &student3.name, &student3.rollNumber);

  // printf("Enter student four details: \n");
  // scanf("%s %d", &student4.name, &student4.rollNumber);

  // if (student3.rollNumber == student4.rollNumber)
  // {
  //   printf("Roll no. cannot be same!");
  // }
  // else
  // {
  //   printf("Roll no. are right!");
  // }

  /*
    Arrays of structures
  */

  // struct Student studentData[3];

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("Enter student %d details: \n", i + 1);
  //   scanf("%s %d", &studentData[i].name, &studentData[i].rollNumber);
  // }

  // for (int i = 0; i < 3; i++)
  // {
  //   printf("The data of student %d is: NAME - %s and ROLL NO. - %d \n", i + 1, studentData[i].name, studentData[i].rollNumber);
  // }

  return 0;
}