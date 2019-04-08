int main(){
	int n,n1,n2,m,k1=0,k2=0;
	cin >> n;
	{for(m=6;m<=n;m+=2)
		{
		for(n1=3;n1<=m/2;n1+=2)
			{for(int j=3;(j*j)<=n1;j+=2)
				if(n1%j==0)
					{k1=1;break;}
			if(k1!=1) 
				{
				n2=m-n1;
				for(int x=3;(x*x)<=n2;x+=2)
					if(n2%x==0)
						{k2=1;break;}
				if(k2 != 1) {cout<<m<<"="<<n1<<"+"<<n2<<endl;
							break;}
				k2 = 0;
			}
			k1=0;}}}
	return 0;
}
					
