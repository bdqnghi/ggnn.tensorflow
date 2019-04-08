int main()
{
    char str[11],substr[4],x[20];
    int i,n,a;
    while(scanf("%s %s",str,substr)!=EOF)
    {  n=0;
       a=strlen(str);
       for(i=1;i<a;i++)
       {
         if(str[i]>str[n])
         n=i;
       }
       for(i=0;i<n+1;i++)
       {
         x[i]=str[i];
       }
       x[n+1]=substr[0];
       x[n+2]=substr[1];
       x[n+3]=substr[2];
       for(i=n+4;i<a+4;i++)
       {
          x[i]=str[i-3];
       }
       for(i=0;i<a+3;i++)
       {
        printf("%c",x[i]); 
       }
       printf("\n");
    }
}                                                 
       