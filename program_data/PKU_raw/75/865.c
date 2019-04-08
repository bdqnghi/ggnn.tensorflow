int main()
{
	int arrivetime[1000],leavetime[1000];
	int i=0,j=0,k,p,q;
	do{
		cin>>arrivetime[i];
		i++;
	}while(cin.get()!='\n');
	do{
		cin>>leavetime[j];
		j++;
	}while(cin.get()!='\n');
	int tpi,Endtime,Time,bein=0,mostbein=0;
	tpi=i;
	Endtime=leavetime[0];
	for(k=1;k<i;k++)
	{
		if(Endtime<leavetime[k])
		{Endtime=leavetime[k];}
		else
		{continue;}
	}
	for(Time=0;Time<=Endtime;Time++)
	{
		for(p=0;p<i;p++)
		{
			if(arrivetime[p]==Time)
			{
				bein++;
			}
			else
			{continue;}
		}
		for(q=0;q<i;q++)
		{
			if(leavetime[q]==Time)
			{
				bein--;
			}
			else
			{continue;}
		}
		if(mostbein<bein)
		{
			mostbein=bein;
		}
		else
		{continue;}
	}
	cout<<tpi<<" "<<mostbein<<endl;
	return 0;
}