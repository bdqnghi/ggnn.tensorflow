int main()
{
	int m,n,i,h,l,s[9][9]={0},record[9][9]={0};
	cin>>m>>n;
	record[4][4]=s[4][4]=m;
	for(i=0;i<n;i++)
	{
		for(h=0;h<9;h++)
			for(l=0;l<9;l++)
			{
				if(record[h][l]!=0)
					{
						s[h][l]+=record[h][l];
						s[h-1][l-1]+=record[h][l];
						s[h][l-1]+=record[h][l];
						s[h+1][l-1]+=record[h][l];
						s[h-1][l]+=record[h][l];
						s[h+1][l]+=record[h][l];
						s[h+1][l+1]+=record[h][l];
						s[h][l+1]+=record[h][l];
						s[h-1][l+1]+=record[h][l];
					}
				
			}
		for(h=0;h<9;h++)
			for(l=0;l<9;l++)
				record[h][l]=s[h][l];
	}
	for(h=0;h<9;h++)
			{
				cout<<s[h][0];
				for(l=1;l<9;l++)
					cout<<" "<<s[h][l];
				cout<<endl;
			}
		return 0;
}
