void main()
{ char a[300],m;
  int n,s,k=0,i;
  gets(a);
  n=strlen(a);
 for(m='a';m<='z';m++)
  {s=0;
   for(i=0;i<=n-1;i++)
    {if(a[i]==m)
      s=s+1;
     else;}
   if(s!=0)
   {printf("%c=%d\n",m,s);k=k+1;}
   else;
  }
 if(k==0)
 printf("No");
}