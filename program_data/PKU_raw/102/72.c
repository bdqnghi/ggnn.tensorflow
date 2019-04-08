
int main()
{
	int n,i;
	scanf("%d",&n);

	char s1[100][40]={0};
	double s2[40]={0};
	double a[40]={0};
	double b[40]={0};
	int j,k;
	j=0;
	k=0;
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",s1[i],&s2[i]);
		if(strcmp(s1[i],"male")==0)
		{
			a[j]=s2[i];
			j++;
		}
		if(strcmp(s1[i],"female")==0)
		{
			b[k]=s2[i];
			k++;
		}
	}

	double slot;
	int aa,bb;
	for(aa=j;aa>=0;aa--)
	{
		for(bb=0;bb<=aa;bb++)
		{
			if(a[bb]>a[bb+1])
			{
				slot=a[bb];
				a[bb]=a[bb+1];
				a[bb+1]=slot;
			}
		}
	}
	for(aa=k;aa>=0;aa--)
	{
		for(bb=0;bb<=aa;bb++)
		{
			if(b[bb]<b[bb+1])
			{
				slot=b[bb];
				b[bb]=b[bb+1];
				b[bb+1]=slot;
			}
		}
	}

	if(j!=0)
	{
		for(i=2;i<=j+1;i++)
		{
			printf("%.2lf ",a[i]);
		}
	}
	if(k!=0)
	{
		for(i=0;i<k-1;i++)
		{
			printf("%.2lf ",b[i]);
		}
		printf("%.2lf",b[k-1]);
	}

	return 0;
}