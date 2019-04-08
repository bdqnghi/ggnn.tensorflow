//????


int main()
{
	int n,flag=0,start[2],end[2],s;
	cin>>n;               //????
	for(int i=0;i<n;i++)            //????????????????
		for(int j=0;j<n;j++)
		{
			int p;
			cin>>p;
			if(p==0&&flag==0)
			{
				start[0]=i;
				start[1]=j;
				flag=1;
			}
			if(p==0&&flag==1)
			{
				end[0]=i;
				end[1]=j;
			}
		}
	s=(end[0]-start[0]-1)*(end[1]-start[1]-1);          //????
	cout<<s<<endl;
	return 0;
}