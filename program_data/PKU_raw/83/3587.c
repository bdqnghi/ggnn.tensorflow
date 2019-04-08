int main()
{
	int n,i;
	int xf[10],sf[10];
	float G[10];
	float sumjdxf=0;
	int sumxf=0;
	float GPA;
	float jdxf[10];

	scanf("%d",&n);
	for(i=0;i<n;i++)
    	scanf("%d",&xf[i]);
    for(i=0;i<n;i++)
		scanf("%d",&sf[i]);
	for(i=0;i<n;i++){
	   if(sf[i]>=90)
		   G[i]=4.0;
	   

	   if((sf[i]<90)&&(sf[i]>=85))
		   G[i]=3.7;
	   
	   if((sf[i]<85)&&(sf[i]>=82))
		   G[i]=3.3;
	   if((sf[i]<82)&&(sf[i]>=78))
		   G[i]=3.0;
	   if((sf[i]<78)&&(sf[i]>=75))
		   G[i]=2.7;
	   if((sf[i]<75)&&(sf[i]>=72))
		   G[i]=2.3;
	   if((sf[i]<72)&&(sf[i]>=68))
		   G[i]=2.0;
	   if((sf[i]<68)&&(sf[i]>=64))
		   G[i]=1.5;
	   if((sf[i]<64)&&(sf[i]>=60))
		   G[i]=1.0;
	   if(sf[i]<60)
		   G[i]=0;
	   jdxf[i]=G[i]*xf[i];
	   sumjdxf+=jdxf[i];
	   }
	 for(i=0;i<n;i++)
		   sumxf+=xf[i];
	 GPA=sumjdxf/sumxf;
	 printf("%.2f",GPA);
	 return 0;
}



	
