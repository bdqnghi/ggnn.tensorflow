int main()
{
	int m, i,j,k,p,s=1;  //m?????????i?j????m???????k?p??????s?????
	cin>>m;
	for(i=0;i<m/2-2;i++)
	{
		i=i+3;
		j=m-i;
		if(i%2!=0)
		{
			s=s*1;
		}
		else
		{
			s=s*0;
		}
		for(k=0;k<i-2;k++)
		{
			if(i%(k+2)!=0)
			{
				s=s*1;
			}
			else
			{
				s=s*0;
			}
		}
		for(p=0;p<j-2;p++)
		{
			if(j%(p+2)!=0)
			{
				s=s*1;
			}
			else
			{
				s=s*0;
			}
		}
		if(s==1)
		{
			cout<<i<<' '<<j<<endl;
		}
		s=1;
		i=i-3;
	}
	cin.get();cin.get();
	return 0;
}