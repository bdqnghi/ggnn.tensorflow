int main()
{ 
		int course,i;
		cin>>course;
		double sum2=0;
		double sum1=0;
		int pa[100000],g[100000];//??
		for(i=0;i<course;i++)
		{
			cin>>pa[i];
			sum2=sum2+pa[i];
		}
	    for(i=0;i<course;i++)
		{
			cin>>g[i];
			double m;								
			 if(g[i]>=90&&g[i]<=100)
				m=4.0;
			else if( g[i]>=85&&g[i]<=89)//??fenshu
				m=3.7;
			else if( g[i]>=82&&g[i]<=84)
				m=3.3;
			else if (g[i]>=78&&g[i]<=81)
				m=3.0;
			else if( g[i]>=75&&g[i]<=77)
				m=2.7;
			else if( g[i]>=72&&g[i]<=74)
				m=2.3;
			else if( g[i]>=68&&g[i]<=71)
				m=2.0;
			else if( g[i]>=64&&g[i]<=67)
				m=1.5;		
			else if(g[i]>=60&&g[i]<=63)
				m=1.0;
			else if(g[i]<60)
				m=0;
			sum1=sum1+m*pa[i];
		}	

	 double gpa;
	gpa=sum1/sum2;
	printf("%.2lf",gpa);
	return 0;
}

