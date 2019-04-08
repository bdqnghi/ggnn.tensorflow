int main()
{
	int a[5][5],f=0,min=INT_MAX,temp,I=0;
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	do
	{
		for(int i=0;i<5;i++)
		{
			if(min>=a[i][f])
			{
				min=a[i][f];
				temp=i;
			}
		}
		for(int j=0;j<5;j++)
		{
			if(min<a[temp][j])
				break;
			if(j==4)
			{
				cout<<temp+1<<" "<<f+1<<" "<<min<<endl;
				I++;
			}
		}
		f++;
		min=INT_MAX;
	}while(f<5);
	if(I==0)
	{
		cout<<"not found"<<endl;
	}
	return 0;
}