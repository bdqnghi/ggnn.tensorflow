int main()
{
	int i=0,a[999],j=0,sp=999,k=0,sp2=99999;
    char c;
	for(i=0;i<999;i++)
		a[i]=0;
	i=0;
	for(j=0;j<sp;j++)
	{
		c=getchar();
		if(c=='\n')
			sp=j;
		else if(c==' ')
		{
			for(k=0;k<sp2;k++)
			{
				if(c!=' ')
				{
					i=i+1;
					a[i]=a[i]+1;
					sp2=k;
				}
				else
					c=getchar();
			}
			sp2=99999;
		}
		else
			a[i]=a[i]+1;
	}
	for(j=0;j<i;j++)
		printf("%d,",a[j]);
	printf("%d",a[i]);
	return 0;
}
