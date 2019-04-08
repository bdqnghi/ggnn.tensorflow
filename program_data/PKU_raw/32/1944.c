int main()
{
    int n;
    int i,j;
    char a[101];
    char b[101];
    int a1[101];
    int b1[101]={0};
    int c[101]={0};
    scanf("%d",&n);
    int length1,length2,length;
    for(j=1;j<=n;j++)
    {
       for(i=0;i<=100;i++)
       {
           a1[i]=b1[i]=c[i]=0;
       }
        scanf("%s%s",a,b);
         length1=strlen(a);
         length2=strlen(b);
        if(length1>length2)
         {length=length1;}
         else
         {length=length2;}
         for(i=0;i<length1;i++)
         {
             a1[i]=a[length1-i-1]-'0';
         }
         for(i=0;i<length2;i++)
         {
             b1[i]=b[length2-i-1]-'0';
         }
          for(i=0;i<length;i++)
         {
             c[i]+=a1[i]-b1[i];
             while(c[i]<0)
             {
                 c[i]=c[i]+10;
                 c[i+1]--;
             }
        }
         for(i=0;i<length;i++)
         {
             printf("%d",c[length-i-1]);
         }
         printf("\n");
    }
    return 0;
}

