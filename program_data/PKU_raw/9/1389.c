struct patient
{
	char No[10];
	int age;
}grp1[100],grp2[100],grp3[100];
int main()
{
	int n;
	scanf("%d",&n);
         int i;
	for(i=0;i<n;i++)
	{
		scanf("%s%d",&grp1[i].No,&grp1[i].age);
	}
         for(i=0;i<n;i++)
	{
		grp2[i].age=-1;
		grp3[i].age=-1;
	}
         for(i=0;i<n;i++)
	{
		if(grp1[i].age>=60)
		{
			strcpy(grp2[i].No,grp1[i].No);
			grp2[i].age=grp1[i].age;
		}
		if(grp1[i].age<60)
		{
			strcpy(grp3[i].No,grp1[i].No);
			grp3[i].age=grp1[i].age;
		}
	}
         char y[10];
	int x;
	int k,m;
	for(k=1;k<n;k++)
	{
		for(m=0;m<n-k;m++)
		{
			if(grp2[m].age<grp2[m+1].age)
			{
				x=grp2[m+1].age;
				grp2[m+1].age=grp2[m].age;
				grp2[m].age=x;
				strcpy(y,grp2[m+1].No);
				strcpy(grp2[m+1].No,grp2[m].No);
				strcpy(grp2[m].No,y);
			}
		}
	}
         for(i=0;i<n;i++)
	{
		if(grp2[i].age!=-1)
			printf("%s\n",grp2[i].No);
	}
         for(i=0;i<n;i++)
	{
		if(grp3[i].age!=-1)
			printf("%s\n",grp3[i].No);
	}
	return 0;
}