int main ()
{  char s1[81];
   char s2[81];
   int i;
   gets(s1);
   gets(s2);
   
   for(i=0;i<=80;i++)
    {
      if (s1[i]>=65&&s1[i]<=90)
        s1[i]+=32;
    }
for(i=0;i<=80;i++)
    {
      if (s2[i]>=65&&s2[i]<=90)
        s2[i]+=32;
    }
    if (strcmp(s1,s2)==0) printf("=");
    else if (strcmp(s1,s2)>0) printf(">");
    else  printf("<");

return 0;
}


