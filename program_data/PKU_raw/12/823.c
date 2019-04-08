int main()
{
	int n,i,j,num,count=0,array[15];
	while(cin>>n&&n!=-1)
	{
		memset(array,0,sizeof(array));
		array[0]=n;
		i=1;num=1;
		while(cin>>n&&n!=0)
		{
			array[i++]=n;
			num++;
		}
		sort(array,array+num);
		for(i=num-1;i>0;i--)
			for(j=i-1;j>=0;j--)
			{
				if(array[i]==2*array[j])
					count++;
			}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}