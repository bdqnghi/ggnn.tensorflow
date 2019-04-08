int main()
{
	int n,i,j;

     scanf("%d",&n);

    int a[30000]={0};

     for (i=0;i<=n-1;i++)
{ 
scanf("%d",&a[i]);

}
printf("%d",a[0]);
for (i=0;i<=n-1;i++)
   
{
  for (j=0;j<=n-1;j++)
   {
if (a[i]==a[j]) break;


if (j==i-1) 
{ 

	printf(" ");
	printf("%d",a[i]);


}
}

}

return 0;
}
