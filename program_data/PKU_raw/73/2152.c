int main()
{
    int a[5][5];
	int max[5]={0,0,0,0,0},k[5]={0,0,0,0,0},r[5]={0,0,0,0,0};
	int i=0,j=0,flag=0,t=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			cin>>a[i][j];
			if(max[i]<a[i][j])
			{
				max[i]=a[i][j];
				k[i]=j;
			}
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			flag=1;
			if(max[i]>a[j][k[i]])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
		    t++;
			r[t]=max[i];
		    break;
		}
	}
    if(flag==1)
		cout<<i+1<<" "<<k[i]+1<<" "<<r[1]<<endl;
	else 
		cout<<"not found"<<endl;
	return 0;
}
 