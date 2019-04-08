int f(int a[])
{
	int i,k=0,max=a[0];
	for(i=0;i<4;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			k=i;
		}
	}
	return k;
}
int main()
{
	int a[4],c[4],d[4];
	int i,j,s,t,l,n=0,g=0,z=0;
	char b[4]={'z','q','s','l'};
	for(i=1;i<6;i++)
	{
		a[0]=i*10;
		d[0]=a[0];
		for(j=1;j<6;j++)
		{
			a[1]=j*10;
			d[1]=a[1];
			for(s=1;s<6;s++)
			{
				a[2]=s*10;
				d[2]=a[2];
				for(t=1;t<6;t++)
				{
					a[3]=t*10;
					d[3]=a[3];
					if( (a[0]+a[1]==a[2]+a[3]) && (a[0]+a[3]>a[1]+a[2]) && (a[0]+a[2]<a[1]) )
					{
						c[0]=f(a);
						a[c[0]]=0;
						c[1]=f(a);
						a[c[1]]=0;
						c[2]=f(a);
						a[c[2]]=0;
						c[3]=f(a);
						for(l=0;l<4;l++)
						cout << b[c[l]] << " " << d[c[l]] << endl;
						n=1;
						break;
					}
				}
				if(n==1)
				{
					g=1;
					break;
				}
			}
			if(g==1)
			{
				z=1;
				break;
			}
		}
		if(z==1)
			break;
	}
	return 0;
}
