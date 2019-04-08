int main()
{
	char a[1000];
	int i,j,k,x,s;
	scanf("%s",a);
	i=0;
	j=0;
	k=0;
	x=strlen(a);
	for (i=0;i<x;i++)
	{
		if((a[i]>='a') && (a[i]<='z'))
		{
			a[i]=a[i]-32;
		}
	}
	for (i=0;i<x;i++)
	{
        if (a[i]!=a[i+1])
		{  s=i-k+1;
		    k=i+1;
		printf("(%c,%d)",a[i],s);
	}
	}
	return 0;
}