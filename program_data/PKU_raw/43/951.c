int main()
{
	int m,i,j,k,t,f1,f2;
	double s[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	double a,b;
	cin>>m;
	a=3;
	b=0;
	
	while (a<=(m/2))
	{
		b=m-a;
		i=0;
		t=0;
		k=0;
		j=0;
	
		while(i<25&&s[i]<a)
		{
			f1=fmod(a,s[i]);			
			if (f1!=0)
			{
				i=i+1;
				t=t+1;
			}
			else i=i+26;
		}
				
		while(j<25&&s[j]<b)
		{
			f2=fmod(b,s[j]);
			if (f2!=0)
				{
					j=j+1;
					k=k+1;
				}
			else j=j+26;
		}
		if (k==j&&i==t) cout<<a<<" "<<b<<endl;
		a=a+2;
	}
		return 0;
}