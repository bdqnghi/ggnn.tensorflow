main() 
{
                 char a[101];
                 int b[101];
                 int i,y;
                 int n=0;
                 gets(a);
                 for(i=0;a[i]!='\0';i++)
                 {
                                    n++;
                                    b[i]=a[i]-'0';
                 }
                 for(i=0;i<=n-2;i++)
                 {
                                        b[i+1]=(b[i]%13)*10+b[i+1];
                                        b[i]=b[i]/13;
                 }
                 y=b[n-1]%13;
                 b[n-1]=b[n-1]/13;
                 if (n==1)
                 printf("0");
                 else if((b[1]==0)&&(n>=3))
                 {
                     for(i=2;i<=n-1;i++)
                     {
                                        printf("%d",b[i]);
                     }
                 }
                 else
                 {
                     for(i=1;i<=n-1;i++)
                     {
                                        printf("%d",b[i]);
                     }
                 }
                 printf("\n%d\n",y);
}
