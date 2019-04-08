void main()
{
	int n,m,sum,*q;
	float *w,sum2=0,gpa;
	scanf("%d",&n);
	q=(int*)malloc(sizeof(int)*n);
	w=(float*)malloc(sizeof(float)*n);
    for(m=0,sum=0;m<n;m++)
	{ 	
		scanf("%d",q+m);
		sum=sum+*(q+m);
	} 
	for(m=0;m<n;m++)
	{
		scanf("%f",w+m);
		if(*(w+m)<=100&&*(w+m)>=90)	sum2=sum2+4.0**(q+m); 
		else if(*(w+m)<=89&&*(w+m)>=85)	sum2=sum2+3.7**(q+m); 
		else if(*(w+m)<=84&&*(w+m)>=82)	sum2=sum2+3.3**(q+m);
		else if(*(w+m)<=81&&*(w+m)>=78)	sum2=sum2+3.0**(q+m); 
		else if(*(w+m)<=77&&*(w+m)>=75)	sum2=sum2+2.7**(q+m); 
		else if(*(w+m)<=75&&*(w+m)>=72)	sum2=sum2+2.3**(q+m); 
		else if(*(w+m)<=71&&*(w+m)>=68)	sum2=sum2+2.0**(q+m); 
		else if(*(w+m)<=67&&*(w+m)>=64)	sum2=sum2+1.5**(q+m); 
		else if(*(w+m)<=63&&*(w+m)>=60)	sum2=sum2+1.0**(q+m); 
		else if(*(w+m)<=59)	sum2=sum2+0.0**(q+m); 
	} 
	gpa=sum2/sum;
	printf("%.2f",gpa);
	return;
}