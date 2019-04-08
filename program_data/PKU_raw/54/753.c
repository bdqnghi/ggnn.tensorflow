
int main()
{
	int i,n,dropnum,monkey[1000];
	cin>>n>>dropnum;
	monkey[n]=dropnum;
	
	do
	{
		monkey[n]=monkey[n]+n;
    	for(i=n-1;i>0;i--)
	    {
		   if(monkey[i+1]%(n-1)!=0) break;
		   else  monkey[i]=monkey[i+1]*n/(n-1)+dropnum;
	    }
	}while(i>=1);

	cout<<monkey[1]<<endl;
	

	return 0;
}

