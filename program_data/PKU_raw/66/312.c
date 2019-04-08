void main()
{
	long int n,y,r,t=0,k,i,m,j,z,yu;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&n,&y,&r);
	if(n>10000)
		n=n%2000;
	k=n/100;
	m=n/400;
	i=n/4-(k-m);
	if(y==1)
		t=0;
	else
	{
		for(j=0;j<y-1;j++)
		t=t+a[j];
	}
	z=365*(n-1)+i+t+r;
	if(y==2&&r==29)
		z=z-1;
	yu=z%7;
	if(yu==0)
		printf("Sun.");	
	else if(yu==1)
		printf("Mon.");
	else if(yu==2)
		printf("Tue.");
	else if(yu==3)
		printf("Wed.");
	else if(yu==4)
		printf("Thu.");
	else if(yu==5)
		printf("Fri.");
	else if(yu==6)
		printf("Sat.");


	}


