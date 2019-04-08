float f(float a)
{
	if(a<0)
	return -a;
	else
	return a;
}
int main()
{
	float n;
	cin>>n;
    double a[100];
	int i,j;
	float sum=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	} 
	float ave,t;
	ave=sum/n;
	
	for(i=1;i<=n;i++)
	  {
	  	for(j=1;j<=n-i;j++)
	  	{
	  		if(a[j+1]<a[j])
	  		{
	  		  t=a[j];a[j]=a[j+1];a[j+1]=t;	
	  		}
	  	}
	  }
	float max=f(a[1]-ave);
	for(i=2;i<=n;i++)
	{
		
		if(f(a[i]-ave)>max)
		max=f(a[i]-ave);
	}
	float z=0;  
	for(i=1;i<=n;i++)
	{   
	
	
	    
		if((f(a[i]-ave)==max)&&(z==0))
		{
		 cout<<a[i];
		 z=1;
		 continue;
	    }
	    if((f(a[i]-ave)==max)&&(z==1))
		{
		 cout<<",";	
		 cout<<a[i];
		 z=1;
	    }
		
	}  
	return 0;  
	  
	
} 