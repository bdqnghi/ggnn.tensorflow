int main()
{
	int i,n,t=0,e,num=0,k;
	char z[10];
	struct point
	{
		char ID[10];
		int age;
	}a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i].ID);
		scanf("%d",&a[i].age);
	}
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			num=num+1;
		}
	}
	int f=num;
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			b[t].age=a[i].age;
			strcpy(b[t].ID,a[i].ID);
			t++;
		}
		if(a[i].age<60)
		{
			b[f].age=a[i].age;
			strcpy(b[f].ID,a[i].ID);
			f++;
		}
	}
	for(i=0;i<num;i++)
	{
		for(k=0;k<num-i-1;k++)
		{
			if(b[k].age<b[k+1].age)
			{
				e=b[k].age;
				b[k].age=b[k+1].age;
				b[k+1].age=e;
				strcpy(z,b[k+1].ID);
				strcpy(b[k+1].ID,b[k].ID);
				strcpy(b[k].ID,z);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",b[i].ID);
	}









		

	return 0;


}