/*
??
???
????yang?
???2012.10.14
*/

int main()
{
	int a,b,c,ah,bh,ch,abc[4],zh,f[4];
	char m[4],z;
	for(a=1;a<=3;a++)
	{
		for( b=1;b<=3;b++)
		{
			for( c=1;c<=3;c++)
			{
				ah=(b>a)+(c==a);
				bh=(a>b)+(a>c);
				ch=(c>b)+(b>a);
				if(((ah-bh)*(a-b)<0)&&((ch-bh)*(c-b)<0)&&((ah-ch)*(a-c)<0))
				{f[1]=a;f[2]=b;f[3]=c;}
				if(a==b&&ah==bh&&((ch-bh)*(c-b)<0)&&((ah-ch)*(a-c)<0))
				{f[1]=a;f[2]=b;f[3]=c;}
				if(a==c&&ah==ch&&((ah-bh)*(a-b)<0)&&((ch-bh)*(c-b)<0))
				{f[1]=a;f[2]=b;f[3]=c;}
				if(b==c&&bh==ch&&((ah-bh)*(a-b)<0)&&((ah-ch)*(a-c)<0))
				{f[1]=a;f[2]=b;f[3]=c;}
				if(a==b&&b==c&&ah==bh&&bh==ch)
			    {f[1]=a;f[2]=b;f[3]=c;}
			}
		}
	}//???????????a,b,c??????????f[]
	
	for (int i=1;i<=3;i++)
	{
		m[i]=i+64;
	}//?m[]??????ABC
	for(int j=1;j<=3;j++)
	{
		for(int k=1;k<=3;k++)
			if(f[j]<f[k]&&j>k)
			{
				z=m[j];
				m[j]=m[k];
				m[k]=z;
				zh;
				zh=f[j];f[j]=abc[k];f[k]=zh;
			}
	}//??????ABC
	cout<<m[1]<<m[2]<<m[3]<<endl;//????????
	
	
	return 0;
}