
int main()
{int a,n,i;
scanf("%d",&n);

for(i=0;i<100;i++)
{ if(n==1)
{printf("End");
break;}

else
{
if (n%2==0)
{a=n/2;
	
printf("%d/2=%d\n",n,a);
n=a;
continue;}
else if(n%2==1)
{
a=n*3+1;}
printf("%d*3+1=%d\n",n,a);
n=a;
continue;}}

	return 0;
}
