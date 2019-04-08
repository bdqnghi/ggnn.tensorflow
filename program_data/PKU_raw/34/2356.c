

int main()
{
	int n,m,i,b,a[100]={0};
scanf("%d",&n);
if(n!=1)
{
do{
if (n%2!=0)
{printf("%d*3+1=%d\n",n,n*3+1);
 n=n*3+1;
}
else
{
	printf("%d/2=%d\n",n,n/2);
		n=n/2;
}
}
while(n>1);

printf("End");
}
else

printf("End");

return 0;
}