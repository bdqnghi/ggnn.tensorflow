char num[15];
int reverse(char num[15])
{
    int i;
    int count=0;
    if(num[0]=='-')
    {
        printf("%c",'-');
    }
    for(i=14;i>=0;i--)
    {
        if((num[i]>='0')&&(num[i]<='9'))
        {
            if(count>0)
            {
                printf("%c",num[i]);
            }
            else if(num[i]!='0')
            {
                 count++;
                 printf("%c",num[i]);
            }
        }               
    }
    printf("\n");
}
main()
{
      int j,k;
      for(k=1;k<7;k++)
      {
      for(j=0;j<=14;j++)
      {num[j]='\0';}
      gets(num);
      reverse(num);
      }
      getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();getchar();
}
