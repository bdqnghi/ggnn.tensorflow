int main()
{ int n;
   scanf("%d",&n);
  int i=0,num=0;
  char s[100];
  while(i<n)
  {scanf("%s",&s);
   num+=strlen(s);
   if(num==strlen(s))
   {printf("%s",s);
   num++;}
   else if(num<80)
   {printf(" %s",s);
    num++;}
    else if(num==80)
    {printf(" %s\n",s);
     num=0;}
   else if(num>80)
   {printf("\n%s",s);
     num=strlen(s);
     num++;}
      i++;
  }
     return 0;
}