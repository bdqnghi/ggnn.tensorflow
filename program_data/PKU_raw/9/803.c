struct patient
{
	char id[10];
	int age;
}pat[100],p[100];
void main()
{
	int n,m=0,i,j=0,k,temp,a[40]={0},sum=1;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",pat[i].id,&pat[i].age);
	for(i=0;i<n;i++)
	{
		if(pat[i].age>=60)
		{	p[j++]=pat[i];m++;}
	}
	a[0]=p[0].age;
	for(j=1;j<m;j++)
	{	for(i=0;a[i]!=0;i++)
			if(a[i]==p[j].age)break;
			if(a[i]==0)
			{a[i]=p[j].age;sum++;}
	}
	for(j=0;j<sum-1;j++)
	{
		k=j;	
		{
			for(i=j+1;i<sum;i++)
				if(a[i]>a[j])
			{k=i;
			temp=a[k];a[k]=a[j];a[j]=temp;}
		}
	}
	for(k=0;k<sum;k++)
	{	for(j=0;j<m;j++)
		{
			if(p[j].age==a[k])printf("%s\n",p[j].id);
		}
	}	
	for(i=0;i<n;i++)
	{	
		if(pat[i].age<60)
			printf("%s\n",pat[i].id);
	}
}