
	struct point
	{
		char a[20];
		int x;
		int y;
		char xue;
		char xi;
		int z;
		int sum;
	};


int main(int argc, char* argv[])
{
	int n,i,max=0,m=0,gong=0;
	scanf("%d",&n);

	struct point *s;
	s=(struct point*)malloc(sizeof(struct point)*n);
	
	for(i=0;i<n;i++)
	{ 
		s[i].sum=0;
		scanf("%s %d %d %c %c %d",s[i].a,&s[i].x,&s[i].y,&s[i].xue,&s[i].xi,&s[i].z);
	}	

	for(i=0;i<n;i++)
	{
		if(s[i].x>80&&s[i].z>=1) s[i].sum=s[i].sum+8000;
		if(s[i].x>85&&s[i].y>80) s[i].sum=s[i].sum+4000;
		if(s[i].x>90) s[i].sum=s[i].sum+2000;
		if(s[i].x>85&&s[i].xi=='Y') s[i].sum=s[i].sum+1000;
		if(s[i].y>80&&s[i].xue=='Y') s[i].sum=s[i].sum+850;
	}

 
	for(i=0;i<n;i++)
	{
		if(s[i].sum>max)
		{max=s[i].sum;m=i;}
	}

	printf("%s\n",s[m].a);
	printf("%d\n",max);


	
	for(i=0;i<n;i++)
	{
		gong=gong+s[i].sum;
	
	}
	printf("%d\n",gong);

	free (s);
	return 0;
}

