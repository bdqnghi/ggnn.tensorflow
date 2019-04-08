void reverse(char n[])
{
     int l,i,counter;
     char b[100]={0};
     l=strlen(n);
     if((n[0]=='-')&&(n[1]!='0'))
     {
      for(i=0;i<l-1;i++)
          b[i]=n[l-i-1];
       printf("-");
       for(i=0,counter=0;b[i]=='0';i++)
          if(b[i]=='0')
            counter++;
       for(i=counter;i<l-1;i++)
          printf("%c",b[i]);
          printf("\n");
       }
     else if((n[0]=='-')&&(n[1]=='0'))
        printf("0\n");
     else 
      {
       for(i=0;i<l;i++)
          b[i]=n[l-i-1];
       for(i=0,counter=0;b[i]=='0';i++)
          if(b[i]=='0')
            counter++;
       for(i=counter;i<l;i++)
          printf("%c",b[i]);
          printf("\n");
      }
      getchar();
}
int main()
{
    int i;
    for(i=1;i<=6;i++)
    {
       char a[100]={0};
       scanf("%s",a);
       reverse(a);
    }
}
