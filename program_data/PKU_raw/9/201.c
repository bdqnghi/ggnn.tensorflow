int main()
{
	struct pa
	{
		char ID[10];
        int age;
	}
	*p;
	int n, i, k, num=0, m=0;
	scanf("%d",&n);
	p=(struct pa*)malloc(sizeof(struct pa)*n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",p[i].ID, &p[i].age);
		if(p[i].age>=60) num++;
	}
	
	int w=0;
    for(i=0;i<n;i++)
	{
		if(p[i].age>=60)
		{
			struct pa q=p[i];
			for(k=i;k>w;k--)
			{
				p[k]=p[k-1];
			}
			p[w]=q;
			w++;
		}
	}
	
	for(i=num-1;i>0;i--)
	{
		for(k=0;k<i;k++)
		{
			if(p[k].age<p[k+1].age)
			{
				struct pa q=p[k];
				p[k]=p[k+1];
				p[k+1]=q;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",p[i].ID);
	}
	free(p);
	return 0;
}

