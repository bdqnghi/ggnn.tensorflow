void main()
{
	int n,i,credit[10],score[10],credit1=0;
	float point[10],gpa,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%d",&credit[i]);
	credit1=credit1+credit[i];
	}
	for(i=0;i<n;i++)
		scanf("%d",&score[i]);
	for(i=0;i<n;i++)
	{if (score[i]>=90&&score[i]<=100)point[i]=4.0;
	 else if (score[i]>=85)point[i]=3.7;
	 else if (score[i]>=82)point[i]=3.3;
	  else if (score[i]>=78)point[i]=3.0;
	   else if (score[i]>=75)point[i]=2.7;
	    else if (score[i]>=72)point[i]=2.3;
		 else if (score[i]>=68)point[i]=2.0;
		  else if (score[i]>=64)point[i]=1.5;
		   else if (score[i]>=60)point[i]=1.0;
		   else point[i]=0;
		   point[i]=point[i]*credit[i];
		   sum=sum+point[i];
	}
	gpa=sum/credit1;
	printf("%.2f",gpa);
}
	 