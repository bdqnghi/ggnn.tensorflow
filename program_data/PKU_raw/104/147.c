int next(int x)
{
	int z;
	if(x%2==0)
		z=x/2;
	else
		z=(x-1)/2;
    return(z);
}
int main()
{
	int x,y;
	int i,j,num1=1,num2=1;
	int z[11],k=0;
	int a[100],b[100];
    scanf("%d%d",&x,&y);

	a[0]=x;
	b[0]=y;
	for(i=1;;i++)
	{
        a[i]=next(x);
		x=a[i];
		num1++;
		if(a[i]==1||a[i-1]==1)
			break;
	}
    for(i=1;;i++)
	{
        b[i]=next(y);
		y=b[i];
		num2++;
		if(b[i]==1||b[i-1]==1)
			break;
	}

	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
		{
			if(a[i]==b[j])
			{
				z[k]=a[i];
			    k++;
			}
			
		}
	printf("%d\n",z[0]);

}