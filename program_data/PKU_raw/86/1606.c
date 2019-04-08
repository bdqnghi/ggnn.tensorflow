int main()
{
	int n;
	cin>>n;
	for(int o=1;o<=n;o++)
	{
		int m;
		cin>>m;
		int stop[m+1],TimeNow=0,Num=0;
		for(int x=1;x<=m;x++) {cin>>stop[x];}
		if(m==0) cout<<60<<endl;
		else
		{
		  for(int x=1;x<=m;x++)
		  {
		    while(Num<stop[x])
		    {
		    	TimeNow++;
		    	Num++;
		    	if(TimeNow>=60) {break;}
		    }
		    TimeNow+=3; 
			if(TimeNow>=60) break;
		  }  
		  if(TimeNow<=60){Num+=60-TimeNow;}
		  cout<<Num<<endl;
	    }
	}	    
	return 0;
}