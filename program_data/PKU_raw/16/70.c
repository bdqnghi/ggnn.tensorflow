int main()
{
    int n=0,i,t;
    char c[10001];
    scanf("%s",c);
    for(i=0;;i++)
    {
                 if(c[i]!='\0')
                 {
                             n++;
                 }
                 else break;
    }        
    if(n%2==0)
    {
              for(i=0;i<n/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    printf("%s",c);
    getchar();
    getchar();
    getchar();
}
