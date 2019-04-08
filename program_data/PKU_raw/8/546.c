int A,B,a[300],b[300],c[600];
void w()
{
	int i;
	scanf("%d%d",&A,&B);
	for(i=0;i<A;i++)
		scanf("%d",&a[i]);
    for(i=0;i<B;i++)
		scanf("%d",&b[i]);
}
void x()
{
	int i,j,t;
	for(i=0;i<A-1;i++)
		for(j=0;j<A-1-i;j++)
			if(a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}
     for(i=0;i<B-1;i++)
		for(j=0;j<B-1-i;j++)
			if(b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}
}
void y()
{
	int i;
    for(i=0;i<A+B;i++)
		if(i<A)c[i]=a[i];
		else c[i]=b[i-A];
}
void z()
{
	int i;
	for(i=0;i<A+B-1;i++)
		printf("%d ",c[i]);
    printf("%d",c[A+B-1]);
}
void main()
{
	w();
	x();
	y();
	z();
}

