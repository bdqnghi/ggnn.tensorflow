int main()
{
	int i,j,a,b,c,counter=0,as,bs,cs;
	int chihuo[4];
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				as=0;bs=0;cs=0;
				chihuo[1]=a;chihuo[2]=b;chihuo[3]=c;
				counter=0;
				//cout<<a<<b<<c<<endl;
				if(b>a) as++;
				if(c==a) as++;
				if(a>b) bs++;
				if(a>c) bs++;
				if(c>b) cs++;
				if(b>a) cs++;
				if(((a>=b)==(as<=bs))&&((a>=c)==(as<=cs))&&((b>=c)==(bs<=cs)))
				{
					for(i=1;i<=3;i++)
					{
						for(j=1;j<=3;j++)
						{
							if(chihuo[j]==i)
							{
								cout<<(char)(64+j);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}