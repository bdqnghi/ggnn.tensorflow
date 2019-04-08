int main (){
	int a[1000];
	int m[1000];
	int  b;
	int k;
	int e;
	int i=0;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		scanf("%d",&m[i]);
		if(m[i]%2!=0)
			a[i]=m[i];
		else
			a[i]=0;
	}
   

	for(int c=1;c<=b;c++)
	{
	    for(i=0;i<b-1;i++)
		{  if(a[i]>a[i+1])
		{
		      e=a[i+1];
			 a[i+1]=a[i];
			 a[i]=e;
		
		
		
		}
		
		}	
	
	
	}
	
		for(i=0;i<b-1;i++)
		{	if(a[i]!=0)
			printf("%d,",a[i]);
		}
        printf("%d",a[b-1]);
		return 0;
}