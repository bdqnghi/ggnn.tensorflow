int main()
{
    int a,i,b[300]={0},c=0;
    char d[300],k;
    gets(d);
    for(k='A';k<='Z';k++)
    {
         for(i=0;i<300&&d[i]!='\0';i++)
         {
                              if(d[i]==k)
                              b[k]++;
                              }
                              if(b[k]!=0)
                              printf("%c=%d\n",k,b[k]);
                              }
     for(k='a';k<='z';k++)
    {
         for(i=0;i<300&&d[i]!='\0';i++)
         {
                              if(d[i]==k)
                              b[k]++;
                              }
                              if(b[k]!=0)
                              printf("%c=%d\n",k,b[k]);
                              }
         for(i=0;i<300;i++)
         {
         if(b[i]!=0)
         c=1;
         }
         if(c==0)
         printf("No");
         return 0;
}