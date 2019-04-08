int main()
{
	int n,i=0,j=0,k=0,h=0,l=0,m=0,ss=1;
	char x[500];
	scanf("%d",&n);
	getchar();
	gets(x);
	char xx[500][500];
	int b[500],s=-1;
	for(i=0;i<500;i++)
	{
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		xx[j][k]=x[i];
		k++;
	}
	xx[j][k]='\0';
//	j++;
	k=0;
	for(i=0;x[i+n-1]!='\0';i++)
	{
		for(h=0;h<=j;h++)
		{	
			s=-1;
			for(l=0;l<n;l++)
			{
				ss=1;
				if(x[i+l]!=xx[h][l])
				{
					ss=0;
					goto end1;
				}
			}
end1:		if(ss==1)
			{
				s=h;
				goto end;
			}
		}
end:		if(s==-1)
		{
			j++;
			b[j]++;
			for(m=0;m<n;m++)
			{
				xx[j][m]=x[i+m];
			}
			xx[j][m]='\0';
		}
		else 
		{
			b[s]++;
		}
	}
	int max=b[0];
	for(i=0;i<=j;i++)
	{
		if(b[i]>=max)
		{
			max=b[i];
		}
//		printf("%s %d\n",xx[i],b[i]);
	}
	if(max==1)
	{
		printf("NO");
	}
	else
	{
		printf("%d\n",max);
		for(i=0;i<=j;i++)
		{
			if(b[i]==max)
			{
				printf("%s\n",xx[i]);
			}
		}
	}
	return 0;
}