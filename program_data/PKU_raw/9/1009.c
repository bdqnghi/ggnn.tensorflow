
struct patient
{
	char id[11];
	int age;
};

void main()
{
	int n;
	scanf("%d\n",&n);
	struct patient *p;
	p=(struct patient *)malloc(len);
	struct patient *a[n],*b[n];
	int anum=0,bnum=0;
	int i,j;
	for(i=0;i<n;i++)
	{
	    scanf("%s %d",p->id,&p->age);
	    if(p->age>=60)
	    {
	    	a[anum]=(struct patient *)malloc(len);
			strcpy(a[anum]->id,p->id);
	    	a[anum]->age=p->age;
	    	anum++;
	    }
		else
		{
			b[bnum]=(struct patient *)malloc(len);
			strcpy(b[bnum]->id,p->id);
	    	b[bnum]->age=p->age;
	    	bnum++;
		}
	}
	for(i=0;i<anum-1;i++)
	{
		for(j=0;j<anum-i-1;j++)
		if(a[j]->age<a[j+1]->age)
		{
			p->age=a[j]->age;
			a[j]->age=a[j+1]->age;
			a[j+1]->age=p->age;
			strcpy(p->id,a[j]->id);
			strcpy(a[j]->id,a[j+1]->id);
			strcpy(a[j+1]->id,p->id);
		}
	}
	for(i=0;i<anum;i++)
	printf("%s\n",a[i]->id);
	for(i=0;i<bnum;i++)
	printf("%s\n",b[i]->id);
}