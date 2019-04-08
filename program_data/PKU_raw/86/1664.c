
int main()
{
	int n,time,times,a[20];
	int sum,i,x,lost;
	cin>>n;
	for (int k=0;k<n;k++)
	{
		time=0;
		sum=0;
		x=0;
		lost=0;
		i=0;
	    cin>>times;
		if (times==0) cout<<60<<endl;
		else
		{
			for (i=0;i<times;i++)
				{
				cin>>a[i];
				lost=lost+3;
			    time=lost+a[i];
				if (time>=60)
				  {
					if(time>=63) cout<<a[i]+60-time+3<<endl;
					else cout<<a[i]<<endl;
					x=1;
					if (i<times-1)
						for (int j=i+1;j<times;j++)
							cin>>a[j];
				    break;
				  }
			    }
			if (x==0)
				cout<<a[times-1]+60-time<<endl;
		}
	}
	return 0;
}