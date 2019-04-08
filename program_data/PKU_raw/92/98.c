int main()
{
	int n,i,tj[1005],qw[1005];
	int win;
	int tl,tr,ql,qr;
	while(cin>>n&&n!=0)
	{
		for(i=0;i<n;i++) cin>>tj[i];
		for(i=0;i<n;i++) cin>>qw[i];
		sort(tj,tj+n);
		sort(qw,qw+n);
		win=0;
		tl=ql=0;
		tr=qr=n-1;
		for(i=0;i<n;i++)
		{
			if(qw[ql]<tj[tl])
			{
				win++;
				ql++;
				tl++;
			}
			else if(qw[ql]>tj[tl])
			{
				win--;
				qr--;
				tl++;
			}
			else
			{
				if(qw[qr]<tj[tr])
				{
					win++;
					qr--;
					tr--;
				}
				else if(qw[qr]>tj[tr])
				{
					win--;
					qr--;
					tl++;
				}
				else
				{
					if(qw[qr]>tj[tl]) {win--;}
					qr--;
					tl++;
					
				}
			}
		}
		cout<<200*win<<endl;
	}
	return 0;
}


