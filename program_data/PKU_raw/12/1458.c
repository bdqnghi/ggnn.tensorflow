int main()
{
	int i,j,x,y,count=0;
	int a[16];
	for(i=1;;i++)
	{
		count=0;
		for(j=0;;j++)
		{
			cin>>a[j];
			if((a[j]==0)||(a[j]==-1))
			break;
		}

		for(x=0;x<=j-1;x++)
		{
			for(y=0;y<=j-1;y++)
			{
				if(a[y]==a[x]*2)
				count=count+1;
			}
		}if(a[j]!=-1)
		cout<<count<<endl;
		}
	return 0;
}
