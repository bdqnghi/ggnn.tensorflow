

int main(int argc, char* argv[])
{
	int num[1000],i,j,a,r,b,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	a=num[0];
	for (j=1;j<n;j++)
	if (num[j]>=a)

	{
		a=num[j];
	}

b=-10000;
for(r=0;r<n;r++)
if(num[r]>=b&&num[r]!=a)
{
	b=num[r];
}
printf("%d\n%d",a,b);

	return 0;
}
