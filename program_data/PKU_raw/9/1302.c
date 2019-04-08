
struct patient
{
    char ID[11];
	int age;
}p[1000];

int main()
{
	int n,i,k,j,l,a=0,b=0,e;
	int sz1[1000],sz2[1000];
	char zfc1[1000][11],zfc2[1000][11],f[11];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&p[i].ID);
		scanf(" %d",&p[i].age);
	}
	for(i=0,j=0,l=0;i<n;i++)
	{
		if(p[i].age>=60)
		{
			a++;
            sz1[j]=p[i].age;
            strcpy(zfc1[j],p[i].ID);
			j++;
		}
		else
		{
			b++;
			sz2[l]=p[i].age;
            strcpy(zfc2[l],p[i].ID);
			l++;
		}
	}
	for(k=0;k<n;k++)
	{
		for(j=n-1;j>=k;j--)
		{
			if(sz1[j+1]>sz1[j])
			{
				e=sz1[j];
				sz1[j]=sz1[j+1];
				sz1[j+1]=e;
				strcpy(f,zfc1[j]);
				strcpy(zfc1[j],zfc1[j+1]);
				strcpy(zfc1[j+1],f);
			}
		}
	}
	for(j=0;j<a;j++)
	{
		printf("%s\n",zfc1[j]);
	}
	for(l=0;l<b;l++)
	{
		printf("%s\n",zfc2[l]);
	}
	return 0;
}