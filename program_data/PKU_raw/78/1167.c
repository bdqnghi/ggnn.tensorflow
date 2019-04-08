int main()
{
	int a,b,c,d,m[5],e;
	char n[5]={'0','z','q','s','l'},f;
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
	    {
			for (c=1;c<=5;c++)
	        {
				for (d=1;d<=5;d++)
	            {
					if ((a+b)==(c+d) && (a+d)>(b+c) && (a+c)<b)
					{
						m[1]=a; m[2]=b; m[3]=c; m[4]=d;
						for (int i=1;i<=3;i++)
						{
							for (int j=1;j<=3-i;j++)
							{
								if (m[j]>m[j+1])
								{
									e=m[j];
									f=n[j];
									m[j]=m[j+1];
									n[j]=n[j+1];
									m[j+1]=e;
									n[j+1]=f;
								}
							}
						}
					}
				}
			}
		}
	}
	for (int k=4;k>=1;k--)
	cout<<n[k]<<" "<<m[k]*10<<endl;		 
					
	
	return 0;
}
