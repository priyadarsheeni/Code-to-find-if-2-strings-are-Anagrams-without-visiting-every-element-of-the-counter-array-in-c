#include<stdio.h>
#include<math.h>

void main()
{
 char s1[100],s2[100];
 
 printf("\nEnter a String 1 : ");
 gets(s1);
 printf("\nEnter a String 2 : ");
 gets(s2);

 int i,x;
 double n=0;

 for(i=0;s1[i] && s2[i];i++)
 {
  x=s1[i]-97;
  n=n+pow(10,x);
  x=s2[i]-97;
  n=n-pow(10,x);
 }

 if(s1[i]==s2[i] && n==0)
  printf("\n'%s' and '%s' are Anagrams.\n",s1,s2);
 else
  printf("\n'%s' and '%s' are not Anagrams.\n",s1,s2);
}

