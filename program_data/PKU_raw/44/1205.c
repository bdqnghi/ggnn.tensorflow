int reverse (int num)
{
	int c[7],i,j;
	if (num>=0) c[0]=1;
	else {c[0]=-1;num=-num;}
	for (i=1;;i++)
	{
		for (j=0;;j++)
		{
			if ((num-j)%10==0) 
			{c[i]=j;num=((num-j)/10);break;}
		}
		if (num==0) break;
	}
	num=c[1];
	for (j=2;j<=i;j++)
	    num=(num*10+c[j]);
	num=num*c[0];
	return (num);
}
void main()
{
	int a[6],i;
	for (i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		a[i]=reverse(a[i]);
	}
	for (i=0;i<6;i++)
		printf("%d\n",a[i]);
}


