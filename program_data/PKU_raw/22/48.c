void main()
{
	int l,i,j,k=0,tp=0;
	int f[300];
	char str[300];
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(!(str[i]==44))
			tp=tp*10+str[i]-48;
		else if(!(str[i-1]==44))
		{
			f[k]=tp;
			k++;
			tp=0;
		}
	}
	f[k]=tp;
	k++;
	f[k]=0;
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(f[j]>f[i])
			{
				tp=f[i];
				f[i]=f[j];
				f[j]=tp;
			}
		}
	}
	if(k==1)
		printf("No");
	else
	{
		for(i=1;i<k;i++)
		{
			if(f[i-1]>f[i])
			{
				printf("%d",f[i]);
				break;
			}
		}
		if(i==k)
			printf("No");
	}
}