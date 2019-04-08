
int main ()
{
	int n,k;
	cin>>n;
	cin.get();
	for (k=0;k<n;k++)
	{
		char s1[10000],s2[10000];                            
		int a1[10000]={0},a2[10000]={0};                     
		int l1,l2;                                          
		int d[10000]={0};                                    
		cin.getline(s1,10000);
		cin.getline(s2,10000);
		l1=strlen(s1);
		l2=strlen(s2);
		int i,j=0;
		for (i=l1-1;i>=0;i--)
		{
			a1[j]=s1[i]-'0';
			j++;
		}
		j=0;
		for (i=l2-1;i>=0;i--)
		{
			a2[j]=s2[i]-'0';
			j++;
		}
		/*for (i=0;i<l1;i++)
		cout<<a1[i];
		cout<<endl;
		for (i=0;i<l2;i++)
		cout<<a2[i];
		cout<<endl;*/
		for (i=0;i<l1;i++)
		{
			//cout<<d[i]<<' ';
			d[i]+=a1[i]-a2[i];
			if (d[i]<0)
			{
				d[i]+=10;
				d[i+1]-=1;
			}
		}
		//cout<<endl;
		/*for (i=0;i<l1;i++)
		cout<<d[i];
		cout<<endl;*/
		int q=0;
		for (i=l1-1;i>=0;i--)
		{
			if ((d[i]==0) && (q==0))
				continue;
			cout<<d[i];
			q=1;
		}
		cout<<endl;
		if (k==n-1)
			return 0;
		cin.get();                                  
	}
	return 0;
}