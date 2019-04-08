void main()
{
	int num,*p,i,sum=0,s;
	float mean,*q,a,t;
	int j,k;
	scanf("%d",&num);
	p=(int*)malloc(sizeof(int)*num);
    q=(float*)malloc(sizeof(float)*num);
	for(i=0;i<num;i++)
	   scanf("%d",p+i);
	for(i=0;i<num;i++)
		sum=sum+p[i];
	    mean=((float)sum)/num;
	
	for(i=0;i<num;i++)
	{
		a=mean-p[i];
		q[i]=(a>=0)?a:(-a);
	}
        
    for(i=0;i<num;i++)
	{
		k=i;
		for(j=i+1;j<num;j++)
		{            
			if(q[j]>=q[k])
				k=j;
		}
		   if(k!=i)
			{
				t=q[k];
				q[k]=q[i];
				q[i]=t;
				s=p[k];
				p[k]=p[i];
				p[i]=s;
			}
	}
             	 
	if (q[0]!=q[1])
		printf("%d",p[0]);
	else
	{
		if(p[0]>=p[1])
			printf("%d,%d\n",p[1],p[0]);
		else
			if(p[0]<p[1])
			printf("%d,%d\n",p[0],p[1]);
	}
	free(p);
	free(q);
}