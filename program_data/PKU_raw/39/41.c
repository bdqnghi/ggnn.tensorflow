
int main()
{
    struct stud
	{
		char na[25];
		int ag,cg,l;
		int t;
		char gb,x;
	}st[101];
	int i,n,num=0,re,max=0;
	long total;
	total=0;

	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		st[i].t=0;
		scanf("%s",st[i].na);
		scanf("%d %d %c %c %d",&st[i].ag,&st[i].cg,&st[i].gb,&st[i].x,&st[i].l);
		if ((st[i].ag>85) && (st[i].x=='Y'))
			st[i].t=st[i].t+1000;

		if ((st[i].ag>85) && (st[i].cg>80))
			st[i].t=st[i].t+4000;
		
		if ((st[i].ag>80) && (st[i].l>=1))
			st[i].t=st[i].t+8000;
		
		if ((st[i].gb=='Y') && (st[i].cg>80))
			st[i].t=st[i].t+850;

		if (st[i].ag>90)
			st[i].t=st[i].t+2000;

		total=(long)(total+st[i].t);
	}

	for (i=0;i<n;i++)
	{
		if (st[i].t>=max)
		{
		  max=st[i].t;
		  num++;
		  re=i;
		}		
	}
	
	if (num==1)
		printf("%s\n%d\n%ld\n",st[re].na,st[re].t,total);
	else 
	{
		num=0;
		for (i=0;num<1;i++)
		{
			if (st[i].t==max)
			{
				printf("%s\n%d\n%d\n",st[i].na,st[i].t,total);
				num++;
			}
		}
	}
	return 0;
}