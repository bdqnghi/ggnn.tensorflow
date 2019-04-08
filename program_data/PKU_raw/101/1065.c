int main()
{
	int i,j,k;
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			for (k=0;k<=2;k++)
				if ((((j>i)+(k==i))==2-i)&&(((i>j)+(i>k))==2-j)&&(((k>j)+(j>i))==2-k))
				{
				//	if (i==2&&j==1&&k==0)
				//		cout<<"ABC"<<endl;
				//	if (i==2&&j==0&&k==1)
				//		cout<<"ACB"<<endl;
				//	if (i==1&&j==0&&k==2)
				//		cout<<"CAB"<<endl;
				//	if (i==1&&j==2&&k==0)
					//	cout<<"BAC"<<endl;
				//	if (i==0&&j==1&&k==2)
				//		cout<<"CBA"<<endl;
				//	if (i==0&&j==2&&k==1)
					cout<<"BCA"<<endl;
				//	cout<<i<<j<<k;
				}
		}
	}
	return 0;
}
