int main()
{
    char c[100];
    gets(c);
    int l,j;
    l=strlen(c);
    int i,t; 
    t=l; 
    for(i=l-1;i>=0;i--)
    {
               if (c[i]==' ')
                  {
                           for(j=i+1;j<t;j++)
                           {
                                             printf("%c",c[j]);
                           }
                           printf(" ");
                           t=i;
                  }
    }
    for(i=0;i<l;i++)
    {
                 if(c[i]==' ')
                 break;
                 else
                 printf("%c",c[i]);
    }
    getchar();
    getchar();
}