int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int x[10000], y[10000];
	x[0]=m;y[0]=n;
	int i=0, j=0, num1, num2;
	if(m==1 || n==1) {int k=1; printf("%d\n", k);}
	else
	{while(x[i]>1)
	{
		if(x[i]%2==0) x[i+1]=x[i]/2;
		else x[i+1]=(x[i]-1)/2;
		i=i+1;
		num1=i+1;
	}
	while(y[j]>1)
	{
		if(y[j]%2==0) y[j+1]=y[j]/2;
		else y[j+1]=(y[j]-1)/2;
		j=j+1;
		num2=j+1;
	}
	int judge;
	for(i=num1, j=num2;i>=0;i--)
	{
		if(x[i]==y[j]){j=j-1; judge=x[i];}
	}
	printf("%d\n", judge);
	}
	return 0;
}
