int main()
{
	int m,i,j,w,x,k,s;
	cin>>m;
	for(i=3;i<=m/2;i+=2)
	{
		j=m-i;
		w=sqrt(i);
		x=sqrt(j);
		for(k=2;k<=i-1;k++)
		{
			if(i%k==0) break;
			if(k>=i-1) 
			{
				for(s=2;s<=j-1;s++)
				{
					if(j%s==0) break;
					if(s>=j-1) cout<<i<<' '<<j<<endl;
				}
			}
		}
	}
	return 0;
}
