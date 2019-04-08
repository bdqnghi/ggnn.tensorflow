int main()
{
	int n,i,j,k=0,m=0,t,x;
	char w[10];
	scanf("%d",&n);
	struct patient
	{char id[10];
	int age;
	}a[100];
	for(i=0;i<n;i++)
		scanf("%s%d",a[i].id,&a[i].age);  /*?????*/
	struct patient1
	{char id[10];
	int age;
	}b[100];
	struct patient2
	{char id[10];
	int age;
	}c[100];
	for(i=0;i<n;i++)
	{
		if(a[i].age>=60)
		{
			b[k].age=a[i].age;
			for(j=0;j<10;j++)
			{
				b[k].id[j]=a[i].id[j];
			}
			k++;
		
		}    /*???????patient1????*/
		else
		{
			c[m].age=a[i].age;
			for(j=0;j<10;j++)
			{
				c[m].id[j]=a[i].id[j];
			}
			m++;
		}
	}      /*?????????patient2,???*/
	for(j=0;j<k-1;j++)
	{
		for(i=0;i<k-1-j;i++)
		{
			if(b[i].age<b[i+1].age)
			{
				t=b[i].age;
				b[i].age=b[i+1].age;
				b[i+1].age=t;
				for(x=0;x<10;x++)
				{
					w[x]=b[i].id[x];
					b[i].id[x]=b[i+1].id[x];
					b[i+1].id[x]=w[x];
				}
			}
		}
	}  /*???patient1?age???????id*/
	for(i=0;i<k;i++)
		printf("%s\n",b[i].id);  /*??patient1*/
	for(i=0;i<m;i++)
		printf("%s\n",c[i].id);   /*??patient2*/
	return 0;
}


