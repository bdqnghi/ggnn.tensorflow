int main()                                                         
{                                                                 
	char n[100]=" ";                                                
	double a=0.0;                                                  
	int b=0,N=0,i=0,j=0,p=0,sum=0;                                  	  
	                                                                
	cin>>a>>n>>b;                                                 
	N=strlen(n);                                                    
	for(i=0;i<N;i++)                                               
	{
		if('A'<=n[i]&&n[i]<='Z')
			n[i]=n[i]-55;
		else if('a'<=n[i]&&n[i]<='z')
			n[i]=n[i]-87;
		else if('0'<=n[i]&&n[i]<='9')
			n[i]=n[i]-48;
	}                                                              
	for(i=0;i<N;i++)                                               
		sum=sum+n[i]*pow(a,N-i-1);                                 
	if(sum>0)                                                      
	{
		for(i=0;sum>0;i++)
		{
			n[i]=sum%b;
			sum=(sum-n[i])/b;
		}                                                                
		for(j=0;j<=i/2;j++)
		{
			p=n[j];
			n[j]=n[i-j];
			n[i-j]=p;
		}                                                          
		for(j=0;j<=i;j++)                                        
		{
			if(0<=n[j]&&n[j]<=9)
				n[j]=n[j]+48;
			else if(n[j]>9)
				n[j]=n[j]+55;
		}                                                          
		for(j=1;j<=i;j++)
			cout<<n[j];                                           
	}
	else if(sum==0)                                                
		cout<<"0"<<endl;
	return 0;
}
