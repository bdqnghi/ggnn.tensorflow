void main()
{
	int i=0,a[300],max,c=-1,b=-1,n;
	char d;
	do{
		scanf("%d",&a[i]);
		d=getchar();
		i++;
	}while(d==',');
	n=i; max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{max=a[i];}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<max)
		{c=a[i];
		break;}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<max&&a[i]>c)
		{c=a[i];
		b++;}
	}
	if(b==-1&&c==-1)
	{
		printf("No");
	}
	else  {printf("%d",c);}
}