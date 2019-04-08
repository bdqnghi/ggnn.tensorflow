int main()
{
	int a,b,c,i;
	a=0;
	b=0;
	for (i=1;i<100;i++)
	{
	scanf("%d",&c);
	if(c>a)
		b=a,
		a=c;
	   
	else if(c<a&&c>=b)
		b=c;
else if(c=a)
c=a;
	}

printf("%d\n",a);
printf("%d\n",b);
return 0;
}
