int main()
{
	int i,j,k,a=0,l=0;
	double m,n;
	char zf[2][10000];
	scanf("%lf",&m);
	scanf("%s",zf[0]);
	scanf("%s",zf[1]);
	j=strlen(zf[0]);
	k=strlen(zf[1]);
	for(i=0;zf[0][i]!='\0'&&zf[1][i]!='\0';i++)
	{
		if((zf[0][i]>'a'&&zf[0][i]<'z')||(zf[1][i]>'a'&&zf[1][i]<'z'))
		{
			l++;
		}
	}
	if(j!=k||l>0)
	{
		printf("error");
	}else
	{
		for(i=0;zf[0][i]!='\0';i++)
		{
			if(zf[0][i]==zf[1][i])
			{
				a=a+1;
			}
		}
			n=1.0*a/j;
			if(n>=m)
			{
				printf("yes");
			}else
			{
				printf("no");
			}
	}

	return 0;
}
