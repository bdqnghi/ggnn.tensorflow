void main()
{
  char c[1000];
  int n,i,j;
  gets(c);
  n=strlen(c);
  for(i=n-1;i>=0;i=i-1)
     {
        if(c[i]==' ') 
          { for(j=i+1;(c[j]!='\0')&&(c[j]!=' ');j=j+1)
               {printf("%c",c[j]);}
            printf(" ");
          }
        if(i==0)
          {for(j=0;(c[j]!=' ')&&(c[j]!='\0');j=j+1)
              printf("%c",c[j]);
           }
     }
}