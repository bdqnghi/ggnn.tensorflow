int main()
{
    int l=0,i,n;
    char word[1500][50];
    cin>>n;
    for(i=0;i<n;i++)
    	cin>>*(word+i);
    for(i=0;i<n-1;i++)
    {
    	if(l+strlen(*(word+i))==80)
    	{
    		l=0;
    		cout<<*(word+i)<<endl;
    	}
    	else if(l+strlen(*(word+i))<80)
    	{
    		if(l+strlen(*(word+i))+1+strlen(*(word+i+1))<=80)
    		{
    			cout<<*(word+i)<<' ';
    			l=l+strlen(*(word+i))+1;
    		}
    		else
    		{
    			cout<<*(word+i)<<endl;
    			l=0;
    		}
    	}
    }
    cout<<*(word+i);
	return 0;
}





