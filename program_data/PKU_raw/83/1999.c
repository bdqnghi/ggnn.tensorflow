int main()
{
	int a[10],b[10],n,d=0;
	float sum = 0,c[10];
    float GPA=0;
	scanf("%d",&n);
    
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
		d+=a[i];
	}
    for(int m=0;m<n;m++)
	{	
		  scanf("%d",&b[m]);
		  if(b[m]>=90)
		  {
			  c[m]=4.0;
		  }
		  else if(b[m]>=85&&b[m]<90)
		  {
              c[m]=3.7;
		  }
          else if(b[m]>=82&&b[m]<85)
		  {
              c[m]=3.3;
		  }
          else if(b[m]>=78&&b[m]<82)
		  {
              c[m]=3.0;
		  }
          else if(b[m]>=75&&b[m]<78)
		  {
              c[m]=2.7;
		  }

          else if(b[m]>=72&&b[m]<75)
		  {
              c[m]=2.3;
		  }
          else if(b[m]>=68&&b[m]<72)
		  {
              c[m]=2.0;
		  }

          else if(b[m]>=64&&b[m]<68)
		  {
              c[m]=1.5;
		  }

          else if(b[m]>=60&&b[m]<64)
		  {
              c[m]=1.0;
		  }
		  else{
			  c[m]=0;
		  }
	}
    for(int k=0;k<n;k++)
	{
		sum+=(float)c[k]*a[k];
	}
	GPA=(float)(sum/d);	
	
	printf("%.2f\n",GPA);
    return 0;
}
   