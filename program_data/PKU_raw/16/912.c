main()
{
int n,i=0,j;
int a[5];
scanf("%d",&n);
for(;n>0;) // ? n>0 ?? a>0 
{
a[i]=n%10;
i++;
n=n/10;
}
for(j=0;j<i;j++)
printf("%d",a[j]);
getchar();
getchar();
}
