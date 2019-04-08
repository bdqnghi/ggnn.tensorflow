int main()
{
    int w,i,t;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>w;
	for(i=0;i<12;i++)
	{
        t=w+12;
	    t=t%7;
		if(t==0) t=7;
		else t=t;
		if(t==5) 
		{
			cout<<i+1<<endl;
		}
		w=w+a[i]-1;
		w=w%7+1;
	}
	return 0;
}
		
	
