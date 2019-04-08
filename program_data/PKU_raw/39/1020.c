void main()
{
	struct student 
	{
		char name[20];
		int qm;
		int bj;
		char gb;
		char xb;
		int lw;
	}a[100];
	int n,b[100]={0},t=0,i,max;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf ("%s %d %d %c %c %d",a[i].name,&a[i].qm,&a[i].bj,&a[i].gb,&a[i].xb,&a[i].lw);
		if (a[i].qm>80&&a[i].lw>0) b[i]=b[i]+8000;
		if (a[i].qm>85&&a[i].bj>80) b[i]=b[i]+4000;
		if (a[i].qm>90) b[i]=b[i]+2000;
		if (a[i].qm>85&&a[i].xb=='Y') b[i]=b[i]+1000;
		if (a[i].bj>80&&a[i].gb=='Y') b[i]=b[i]+850;
	}
	max=0;
	for (i=0;i<n;i++)
	{
		t=t+b[i];
		if (b[i]>b[max]) max=i;
	}
	printf ("%s\n",a[max].name);
	printf ("%d\n",b[max]);
	printf ("%d\n",t);
}