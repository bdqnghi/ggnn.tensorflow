void main()
{
	int t=0,a[300],s=0,i;
	char c;
	for (i=1;i<300;i++)
		a[i]=0;
	while ((c=getchar())!='\n')
	{
		if(c!=' ')
		{
			if (t==0)
			  s++;
		      t=1;
		      a[s]++;
		}
		if(c==' ')
			t=0;
	}
	printf ("%d",a[1]);
	if(s>1)
	{
	   for (i=2;i<=s;i++)
	     printf(",%d",a[i]);
	}
}

