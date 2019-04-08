int main()
{
	
	int n,i,j,na=0,t0=1,t=1;	
	char a[81];
	cin >>n;
	cin.get();
	int a0;
	for(i=1;i<=n;i++)
	{
		cin.getline(a,81,'\n');	
		a0=(int)a[0];
		for(j=0;j<=80;j++)
		{
			if(a[j]=='\0')
			{
				na=j;
				break;
			}
		}
		
		if(a[0]!='_' && ((a0>122)||(a0<65)))
		{
			t0=0;
		}
		if(a[0]=='_' || ((a0>=65)&&(a0<=90)) || ((a0>=97)&&(a0<=122)))
		{
			t0=1;
		}
		if(na==1 && t0==0)
		{
			t=0;
		}
		if(na==1 && t0==1)
		{
			t=1;
		}
		if(na>1 && t0==0)
		{
			t=0;
		}
		if(na>1 && t0==1)
		{
			for(j=1;j<na;j++)
			{
				int aj;
				aj=(int)a[j];
				if(aj==95 || (aj>=48 && aj<=57) || (aj>=65 && aj<=90) || (aj>=97 && aj<=122) )
				{
					t=1;
				}
				else 
				{
					t=0;
					break;
				}
			}
		}
		cout <<t << endl;
	}
	return 0;
}
