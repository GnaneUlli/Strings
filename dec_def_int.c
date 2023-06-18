Declaration :If you just state a variable without giving any value it is known as declaration
Ex : char guy [];

     char guy [20];

     char *p;
     
Intialization  : If you give both variable name and its value at a time known as intialization 

Ex  :  char guy[20]="dj";

/* Here the size will be 3 if you use sizeof(guy) beacause every string ends with \0 which is null operator 
if you see that symbol that is the end of the string, but strlen() gives size without \0 opreator so strlen(guy) would be 2"

/*char c[5] = "abcde";Here, we are trying to assign 6 characters (the last character is '\0') 
to a char array having 5 characters. This is bad and you should never do this.*/

Some valid Intializations : 

    char[]="jdfn";  
    
    char c[50] = "abcd";

    char c[] = {'a', 'b', 'c', 'd', '\0'};

   char c[5] = {'a', 'b', 'c', 'd', '\0'}; 

   char c[100];
 c = "C programming";  // Error array type is not assignable.you can use strcpy which are built in string functions
but you can do the below assignment
char c[] ="c programming ";
char d = c;
//Indexing of string is same as an array
//%s is used to print string 
//we can use fgets() gets() built in functions instead of scanf()
//similarly to print puts() instead of printf()

In strings we can use poinetrs like below since the str contains base adress of the first element same as array

#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}

if str1== str2 gives 0
else if str1> str2 gives positive value 
else str1<str2 gives negative values
most of the content you will find in strings mcqs
