int line[99999]={0},temp[99999]={0};
void cal(int line[99999])
{
	int i;
	for(i=0;i<9999;i++)
	{
		temp[i]=line[i]*2;
		
	}
	for(i=0;i<9999;i++)
	{
		if(temp[i]>=10)
		{
			temp[i]=temp[i]-10;
			temp[i+1]=temp[i+1]+1;
		}
	}
	for(i=0;i<9999;i++)
	{
		line[i]=temp[i];
	}
}
int main()
{
	int n,p=0,j,i;
	cin>>n;
	if(n==0)cout<<"1"<<endl;
	else 
	{
		line[0]=1;
		while(p<n)
		{
			cal(line);
			p++;
		}
		j=9998;
		while(temp[j]==0)j--;
		for(i=j;i>=0;i--)
			cout <<temp[i];
		cout <<endl;
	}
	return 0;
}