int main()
{
	int n,i,j,k,l,sum[100001],temp=0;
	cin>>n;
	struct student
	{
		int ID;
		int chinese;
		int math;
	}person[100001];//???????,??ID?????????
	for(i=1;i<=n;i++)
	{
		cin>>person[i].ID>>person[i].chinese>>person[i].math;
		sum[i]=person[i].chinese+person[i].math;//????
	}
	for(i=1;i<=n;i++)
	{
		if(sum[i]>temp)
		{
			temp=sum[i];
			j=i;//?????
		}
	}
	temp=0;
	for(i=1;i<=n;i++)
	{
		if(sum[i]>temp&&i!=j)//???
		{
			temp=sum[i];
			k=i;
		}
	}
temp=0;
	for(i=1;i<=n;i++)
	{
		if(sum[i]>temp&&i!=j&&i!=k)//???
		{
			temp=sum[i];
			l=i;
		}
	}
	cout<<person[j].ID<<" "<<sum[j]<<endl;
	cout<<person[k].ID<<" "<<sum[k]<<endl;
	cout<<person[l].ID<<" "<<sum[l]<<endl;
	return 0;
}