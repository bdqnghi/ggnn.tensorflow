int main()
{
	char a[301], b[26], i;
	int c[26], k, m=0, n=0, sum=0;
	scanf("%s",a);

	for(i='a';i<='z';i++)
	{
		m=0;
		for(k=0;;k++)
		{
			if(a[k]=='\0') break;
			if(a[k]==i)
			{
				m++;
				b[n]=a[k];
			}
		}
		if(m>0)
		{
			sum++;
			c[n]=m;
			n++;
		}
	}


	if(sum==0)  printf("No");
	else
	{
		for(k=0;k<sum;k++)
		{
			printf("%c=%d\n",b[k], c[k]);
		}
	}
	return 0;
}