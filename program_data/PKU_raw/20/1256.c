int main()
{
	char a[22],b[4],max;
	int i,imax,l1,l2;
	while(scanf("%s%s",a,b)!=EOF)
	{
		l1=strlen(a);
		l2=strlen(b);
		max=a[0];
		imax=0;
		for(i=1;i<l1;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				imax=i;
			}
		}
		for(i=l1-1;i>imax;i--)
			a[i+l2]=a[i];
		a[l1+l2]='\0';
		for(i=0;i<l2;i++)
			a[imax+i+1]=b[i];
		puts(a);
		printf("\n");
	}
	return 0;
}