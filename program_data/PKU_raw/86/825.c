int main()
{
	int n,m,i,j,a[100],count[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>a[j];
			if((a[j]+j*3>=57)&&(a[j]+j*3<=60))
				count[i]=a[j];
			else if((a[j]+j*3>60)&&(a[j-1]+(j-1)*3<57))
				count[i]=60-j*3;
			else continue;
		}
        if(m==0)
			count[i]=60;
		else if(a[m-1]+m*3<=60)
			count[i]=60-m*3;
		
	
        cout<<count[i]<<endl;
	}
	return 0;
}