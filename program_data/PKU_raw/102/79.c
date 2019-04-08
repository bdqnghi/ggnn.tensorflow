int main()
{
	int n,i,a=0,b=0,k,j;
	scanf("%d\n",&n);
	char s1[10]="male";
	char s2[10]="female";
	struct stu{
		char sex[10];
		double hei;
	}stu[40];
	double sz1[40];
	double sz2[40];
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",stu[i].sex,&stu[i].hei);
		if(strcmp(stu[i].sex,s1)==0)
		{
			sz1[a]=stu[i].hei;
			a=a+1;
		}
		if(strcmp(stu[i].sex,s2)==0)
		{
			sz2[b]=stu[i].hei;
			b=b+1;
		}
	}
	double e;
	
	for(k=1;k<a+1;k++)
	{
		for(j=0;j<a+1-k;j++)
		{
			if(sz1[j]>sz1[j+1])
			{
				e=sz1[j+1];
				sz1[j+1]=sz1[j];
				sz1[j]=e;
			}
		}
	}
		for(k=1;k<b+1;k++)
	{
		for(j=0;j<b+1-k;j++)
		{
			if(sz2[j]<sz2[j+1])
			{
				e=sz2[j+1];
				sz2[j+1]=sz2[j];
				sz2[j]=e;
			}
		}
	}
    for(j=1;j<a+1;j++)
	{
		printf("%.2lf ",sz1[j]);
	}
	for(j=0;j<b-1;j++)
	{
		printf("%.2lf ",sz2[j]);
	}
printf("%.2lf",sz2[b-1]);
	return 0;
}




	

