void main()
{
	int n,a[1000],t=0,i;
	float b[1000],s=0;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t=t+a[i];
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
		if(b[i]>89&&b[i]<101)
			b[i]=4.0;
		else if(b[i]>84&&b[i]<90)
			b[i]=3.7;
        else if(b[i]>81&&b[i]<85)
			b[i]=3.3;
		else if(b[i]>77&&b[i]<82)
			b[i]=3.0;
		else if(b[i]>74&&b[i]<78)
			b[i]=2.7;
		else if(b[i]>71&&b[i]<75)
			b[i]=2.3;
		else if(b[i]>67&&b[i]<72)
			b[i]=2.0;
		else if(b[i]>63&&b[i]<68)
			b[i]=1.5;
		else if(b[i]>59&&b[i]<64)
			b[i]=1.0;
		else 
			b[i]=0;
	}
	for(i=0;i<n;i++)
		s=a[i]*b[i]+s;
	printf("%.2f",s/(float)t);
}