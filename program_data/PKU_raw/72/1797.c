int shan[max][max]={0};
int main()
{
	int h,l;
	cin>>h>>l;
	for(int i=1;i<=h;i++)
		for(int j=1;j<=l;j++)
			cin>>shan[i][j];
	for(int i=1;i<=h;i++)
		for(int j=1;j<=l;j++)
			if(shan[i][j]>=shan[i-1][j]&&shan[i][j]>=shan[i+1][j]&&shan[i][j]>=shan[i][j-1]&&shan[i][j]>=shan[i][j+1])
				cout << i-1 <<" "<<j-1<<endl;
			
		
		
}