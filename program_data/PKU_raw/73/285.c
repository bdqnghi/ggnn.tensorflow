int main()//?????
{
	int a[5][5],i=0,j=0;//??????
	int m[5],n[5];
	for(i=0;i<5;i++)//????
		for(j=0;j<5;j++)
			cin>>a[i][j];
	for(i=0;i<5;i++)//???????
	{
		m[i]=a[i][0];
		for(j=1;j<5;j++)
		{
			if(a[i][j]>m[i])
				m[i]=a[i][j];
		}
	}
	for(j=0;j<5;j++)//???????
	{
		n[j]=a[0][j];
		for(i=1;i<5;i++)
		{
			if(a[i][j]<n[j])
				n[j]=a[i][j];
		}
	}
	for(i=0;i<5;i++)//???? 
	{
		for(j=0;j<5;j++)
		{
			if(m[i]==n[j])
			{
				cout<<i+1<<' '<<j+1<<' '<<m[i];
				//break;
				
				return 0;
			}
			//else if(i==4 && j==4)
			//{
			//	cout<<"not found";
			//	break;
			//}
		}
		//if(m[i]==n[j])//???????????
		//	break;
	}
	cout<<"not found";
	
	return 0;//?????
}	