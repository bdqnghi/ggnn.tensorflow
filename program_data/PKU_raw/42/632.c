void main()

{
   int n,i,m,j;
	long int a[100000];
	long int *point,*qoint,b;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%ld",&a[i]);
    scanf("%ld",&b);
	point=a;
	m=0;
	for(i=0;(i<n)&(m<n);point++,i++)
	{
	    if(*point==b)
		{
			qoint=point;
			for(j=i;j<n-1;qoint++,j++)
			{*qoint=*(qoint+1);}
			*qoint=b;
		    point=point-1;
			i=i-1;
			m=m+1;

		       
			
		}
	
		 
	}
   
	point=a;
	if(*point!=b)
	printf("%ld",*point);
	point=point+1;
	for(i=1;i<n;i++,point++)
	if(*point!=b)
    printf(" %ld",*point);

}
    
	
   
			
		
		
			
	