main()
{   char a[100],b[100];
    int i,j,f(char x);
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
      if(f(a[i])==1)a[i]-=32;
      if(f(b[i])==1)b[i]-=32;
      if(a[i]<b[i]){printf("<");break;}
      if(a[i]>b[i]){printf(">");break;}
    }
    if(a[i]==b[i]&&a[i]=='\0')printf("=");


}

int f(char x)
{ return (x>=97)&&(x<=122);
}