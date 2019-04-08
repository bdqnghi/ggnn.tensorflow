
int main()
{
int n,i,a,b,c;
int z[5];
scanf("%d",&n);

for(i=0,a=n;a>0;i++)
	{
	 a/=10;
	}
b=i;

for(;i>0;i--)
	{
		z[i-1]=n/(int)pow(10,i-1);
		n-=z[i-1]*(int)pow(10,i-1);
	}

for(c=0;c<b;c++)
printf("%d",z[c]);

return 0;
}