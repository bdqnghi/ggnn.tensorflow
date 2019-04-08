struct stu
{
	int ID;
	int Chinese;
	int math;
	int sum;
}zz[100000],mx,mx1,mx2;
int main()
{
	int n,i,j;
	cin>>n;
	for ( i = 0 ; i < n ; i ++ )
	{
		cin>>zz[i].ID>>zz[i].Chinese>>zz[i].math;
		zz[i].sum = zz[i].Chinese + zz[i].math;
	}
	mx = zz[0];
	for ( i = 0 ; i < n ; i ++ )
	{
		if ( zz[i].sum > mx.sum )
			mx = zz[i];
	}
		cout<<mx.ID<<' '<<mx.sum<<endl;
		mx.sum=0;
		mx1 = mx;
		for ( i = 0 ; i < n ; i ++ )
	{
		if ( zz[i].sum > mx1.sum )
			{
				if ( zz[i].ID == mx.ID )
				continue;
			mx1 = zz[i];
			}
	}
		cout<<mx1.ID<<' '<<mx1.sum<<endl;
		mx1.sum=0;
		mx2 = mx1;
		for ( i = 0 ; i < n ; i ++ )
	{
		if ( zz[i].sum > mx2.sum )
			{
				if ( zz[i].ID == mx.ID || zz[i].ID == mx1.ID)
				continue;
			mx2 = zz[i];
			}
	}
		cout<<mx2.ID<<' '<<mx2.sum<<endl;
}