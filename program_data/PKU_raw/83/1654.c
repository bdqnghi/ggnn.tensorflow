void main()
{
	int n,i,k=0;
    scanf("%d",&n);
    int a[n],b[n];
	double m,s=0.0,GPA;
    for(i=0;i<n;i++)
       scanf("%d ",&a[i]);
    for(i=0;i<n;i++)
       scanf("%d ",&b[i]);
    for(i=0;i<n;i++)
	{
		if(b[i]>=90)
			m=4.0;
		else if(b[i]>=85)
			m=3.7;
			else if(b[i]>=82)
			        m=3.3;
				else if(b[i]>=78)
		            	m=3.0;
					else if(b[i]>=75)
		             	m=2.7;
						else if(b[i]>=72)
		                	m=2.3;
							else if(b[i]>=68)
			                     m=2.0;
								else if(b[i]>=64)
			                         m=1.5;
									else if(b[i]>=60)
		                                	m=1.0;
										else m=0.0;
		s=s+a[i]*m;
		k=k+a[i];
	}
	GPA=s/k;
	printf("%.2f",GPA);
}