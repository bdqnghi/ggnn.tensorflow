int main()
{
   int i,sum=0,n;
   cin>>n;
    for(i=1;i<=n;i++)
	{
		if ((i-7)%10==0) sum=sum;
		else 
		    if (i%7==0)  sum=sum;
		    else 
				if (i>70) 
					if (i<80) sum=sum;
					else sum+=i*i;
                else sum+=i*i;
	}
    cout<<sum<<endl;
    return 0;
}