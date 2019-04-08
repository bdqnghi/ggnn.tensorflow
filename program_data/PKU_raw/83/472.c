main()
{
	int a[10],b[10],i,m;float t,s=0,j,k=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<m;i++)
	{
		if(b[i]>=90)
			t=4.0;
		   else if(b[i]>=85)
		   t=3.7;
		else if(b[i]>=82)
			t=3.3;
			else if(b[i]>=78)
			t=3.0;
			else if(b[i]>=75)
			t=2.7;
			else if(b[i]>=72)
			t=2.3;
			else if(b[i]>=68)
			t=2.0;
			else if(b[i]>=64)
				t=1.5;
			else if(b[i]>=60)
				t=1.0;
			else  
				t=0;
			j=a[i]*t;
			s=j+s;
	}
	for(i=0;i<m;i++)
	 k=a[i]+k;
	printf("%.2f\n",s/k);
}

