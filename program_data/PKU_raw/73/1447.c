int main()
{
	int a[5][5],b[5][5],c[5][5],i,k,t,m=0,x,y;
	for(i=0;i<5;i++)
		for(k=0;k<5;k++)
		{
			cin>>a[i][k];
			b[i][k]=a[i][k];
			c[i][k]=a[i][k];
			cout<<endl;
		}
	for(i=0;i<5;i++)
		for(t=0;t<4;t++)
			if(b[i][t]>b[i][t+1])
			{
				k=b[i][t+1];
				b[i][t+1]=b[i][t];
				b[i][t]=k;
			}
	for(t=0;t<5;t++)
		for(i=0;i<4;i++)
			if(c[i][t]<c[i+1][t])
			{
				k=c[i+1][t];
				c[i+1][t]=c[i][t];
				c[i][t]=k;
			}
	for(i=0;i<5;i++)
		for(t=0;t<5;t++)
			if(b[i][4]==c[4][t])
			{
				m++;
				x=i+1;
				y=t+1;
			}
	if(m==0)cout<<"not found";
	else
	cout<<x<<" "<<y<<" "<<b[x-1][4]<<endl;
	return 0;
}