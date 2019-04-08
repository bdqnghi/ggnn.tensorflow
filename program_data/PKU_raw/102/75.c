int main()
{ 
	struct a
	{
		char x[6];
		double y;
	}as[40],t;
	int n,i,k,I;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%s%lf",as[i].x,&as[i].y);
	for(k=0;k<n;k++) 
	{ 
		for(i=1;i<n-k;i++) 
		if(as[i].y<as[i-1].y)
		{
			t=as[i];
			as[i]=as[i-1];
			as[i-1]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(as[i].x,"male")==0) printf("%.2lf ",as[i].y);
	}
	for(i=n-1;i>=0;i--)
	{
		if(strcmp(as[i].x,"female")==0) {printf("%.2lf",as[i].y);I=i;break;}
	}
	for(i=I-1;i>=0;i--)
	{
		if(strcmp(as[i].x,"female")==0) printf(" %.2lf",as[i].y);
	}
	return 0;
}


