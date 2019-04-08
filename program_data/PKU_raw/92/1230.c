int Compare(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}

int main()
{                                                 


	 for(;;){
             	int n=1,r=0,h=0,win=0,lose=0,tie=0,money=0,t1=0,t2=0,q1=0,q2=0;
     scanf("%d",&n);
	if(n==0) break;
	else{

	int *a=NULL,*b=NULL;
		a=(int *)malloc(n*sizeof(int));	
		b=(int *)malloc(n*sizeof(int));	
	   
		
	    for(int i=0;i<n;i++)			
	{
		scanf("%d",&a[i]);
	}
    qsort(a,n,sizeof(int),Compare);
    for(int i=0;i<n;i++)			
	{
		scanf("%d",&b[i]);
	}
	qsort(b,n,sizeof(int),Compare);
	t1=0;t2=n-1;q1=0;q2=n-1;			
	win=0;lose=0;money=0;tie=0;


	for(;(t1!=t2)&&(q1!=q2);)     
	{
		if (a[t1]>b[q1])		
		{
			win++;
			t1++;			
			q1++;			
			continue;
		}
		else if(a[t2]>b[q2])		
			{
				win++;
				t2--;				
				q2--;			
				continue;
			}
		else if(a[t2]==b[q1])       
		{
			tie++;
			t2--;
			q1++;
		}
		else if(a[t2]<b[q1])     
		{
			lose++;
			t2--;
			q1++;
		}
	}
	if(a[t1]==b[q1])         
	{
		tie++;
	}
	else if(a[t1]>b[q1])
	{
		win++;
	}
	else
	{
		lose++;
	}
	
    	money=200*win-200*lose;
	
		printf("%d\n",money);
	
				}
			 }


}
