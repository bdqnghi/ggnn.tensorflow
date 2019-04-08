int main()
{
	int a,b,c,d,e,i,j=0;
	for(a=1;a<6;a++)
		for(b=1;b<6;b++)
			if(a!=b)
				for(c=1;c<6;c++)
					if(c!=a&&c!=b)
						for(d=1;d<6;d++)
							if(d!=a&&d!=b&&d!=c)
								for(e=1;e<6;e++)
									if(e!=2&&e!=3&&e!=a&&e!=b&&e!=c&&e!=d)//a,b,c,d,e?????
									  if((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2)//?????
									  {
										int m[5]={a,b,c,d,e},n[5]={(e==1),(b==2),(a==5),(c!=1),(d==1)};//m????n?????
										for(i=0;i<5;i++)//??1 2????
											{if(m[i]==1&&n[i]==1)
												j++;//j???????????
											else if(m[i]==2&&n[i]==1)
												j++;
											}
										if(j==2)
											{for(i=0;i<4;i++)//??
												cout<<m[i]<<' ';
											cout<<m[4];
											}
										else j=0;//???j?0
									  }
	return 0;
}
