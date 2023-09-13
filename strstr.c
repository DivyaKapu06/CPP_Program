#include<stdio.h>

void strstr(const char* haystack, const char* needle)
{
char* ned = needle;
char* hay = haystack;

while(*haystack!='\0')
{

   if(*ned==*haystack)
   {
       hay = haystack;
       while(*ned!='\0')
       {
           if(*ned!=*hay)
           {
               break;
           }

           ned++;
           hay++;
       }
   }
   ned = needle;
   haystack++;
}
}

int main()
{

 strstr("sadbutsad","sad");
}

