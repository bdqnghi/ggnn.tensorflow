int main()
{
	int n;
         scanf("%d",&n);
	int i;	
	int sz[10],sz2[10];
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&sz2[i]);
	}	
	double point[10];
	for(i=0;i<n;i++){
		if(sz2[i]<60)
			point[i]=0;
		else if(sz2[i]<64)
			point[i]=1.0;
		else if(sz2[i]<68)
			point[i]=1.5;
        else if(sz2[i]<72)
			point[i]=2.0;
        else if(sz2[i]<75)
			point[i]=2.3;
        else if(sz2[i]<78)
			point[i]=2.7;
        else if(sz2[i]<82)
			point[i]=3.0;
        else if(sz2[i]<85)
			point[i]=3.3;
        else if(sz2[i]<90)
			point[i]=3.7;
		else if(sz2[i]<=100)
			point[i]=4.0;
	}
	double m=0,result;
	int q=0;
	for(i=0;i<n;i++){
       m=m+point[i]*sz[i];
	   q=q+sz[i];
	   }
    result=m/q;
    printf("%.2lf",result);
return 0;
}
