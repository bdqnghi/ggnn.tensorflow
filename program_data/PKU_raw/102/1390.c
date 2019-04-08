float cmp(float *a,int n)
{
	float temp;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
                        }
		}
	}
	return *a;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j,k,a=0,b=0;
	char sex[10];
	float man[40],woman[40],h;
	while(i<n)
	{
		scanf("%s %f",sex,&h);
		if(sex[0]=='m')
		{
			man[a]=h;
			a++;
		}
		else
		{	
			woman[b]=h;
			b++;
		}
		i++;
	}
	cmp(man,a);
	cmp(woman,b);
	printf("%.2f",man[0]);
	for(k=1;k<a;k++)
		printf(" %.2f",man[k]);
	for(k=b-1;k>0;k--)
		printf(" %.2f",woman[k]);
	printf(" %.2f\n",woman[0]);
}
