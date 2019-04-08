int main()
{
    int n;
    int i,j,k;
    int length;
    scanf("%d",&n);
    int p,temp;
    char a[10005];
    int b[10005]={0};
    scanf("%s",a);
    length=strlen(a);
    for(i=0;i<length-n+1;i++)
    {
       if(b[i]!=-1)
       {
           for(j=i+1;j<length-n+1;j++)
          {
             p=0;
             for(k=0;k<n;k++)
             {
                 if(a[i+k]!=a[j+k])
                 {
                     p=1;
                     break;
                 }
             }
            if(p==0)
            {
               b[i]++;
               b[j]=-1;
              //printf("%d***%d\n",i,j);
            }
           }
       }
    }
    temp=0;
    for(i=0;i<length;i++)
    {
        if(b[i]>temp)
        {
          temp=b[i];
        }
    }
    //printf("%d",temp);
    if(temp==0)
    {
        printf("NO");
    }
    else
    {
        printf("%d\n",temp+1);
    for(i=0;i<length;i++)
    {
        if(b[i]==temp)
        {
          for(k=0;k<n;k++)
          {
              printf("%c",a[i+k]);
          }
          printf("\n");
        }
    }
    }
    return 0;

}
