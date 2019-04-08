int main()
{
	int a[100];
	int n,num,i,j,t;
	cin>>n;
	for(j=0,i=0;j<n;j++)
	{
		for(i=0;i<100;i++)
			a[i]=0;
		i=0;
		do
	    {
		    cin>>a[i];i++;
	    }while(cin.get()!='\n');
		t=i-1;
		if(a[t]+a[0]*3>=60)
		{
			for(i=1;i<=t;i++)
			{
				if(a[i]+3*i>=60) break;
		    }
			t=i;
			if(a[i]+3*i-3<=60) num=a[i];
			else {num=a[i]+3*i-3-60;num=a[i]-num;}
		}
		else num=60-3*a[0];
		cout<<num<<endl;
	}
	return 0;
}