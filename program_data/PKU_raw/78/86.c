int main()
{
	int z,q,s,l,i,j,a0,a[4];
	char b[4]={'z','q','s','l'},b0;
	for(z=1;z<6;z++)
	{
		for(q=1;q<6;q++)
		{
			for(s=1;s<6;s++)
			{
				for(l=1;l<6;l++)
				{
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q))
					{
						a[0]=z*10;
						a[1]=q*10;
						a[2]=s*10;
						a[3]=l*10;
						for(i=1;i<=4;i++)
						{
							for(j=0;j<4-i;j++)
							{
								if(a[j]>a[j+1])
								{
									a0=a[j];
									a[j]=a[j+1];
									a[j+1]=a0;
									b0=b[j];
									b[j]=b[j+1];
									b[j+1]=b0;
								}
							}
						}
					}
				}
			}
		}
	}
	for(i=3;i>=0;i--)
	{
		printf("%c %d\n",b[i],a[i]);
	}
	return 0;
}
