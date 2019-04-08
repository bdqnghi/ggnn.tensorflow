
int isnum(int);

int main()
{
int n,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
if (isnum(i)==1)
{
	sum+=i*i;
}
}
printf("%d",sum);
return 0;
}

int isnum(int i)
{
if (i%10 == 7)
{
return 0;
}
if ((i/10)*10==70)
{
return 0;
}
if (i%7==0)
{
return 0;
}
return 1;
}
