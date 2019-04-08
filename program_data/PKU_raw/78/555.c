int main()
{
	int z,q,s,l;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++)
			for(s=1;s<=5;s++)
				for(l=1;l<=5;l++)
							if(z+q==s+l&&z+l>s+q&&z+s<q)
							{
	int a[4];
	int b[4];
	a[1]=z*10;
	b[1]='z';
	a[2]=q*10;
	b[2]='q';
	a[3]=s*10;
	b[3]='s';
	a[4]=l*10;
	b[4]='l';
	int m=0;
	int c[4]={0,0,0,0};
	int d[4];
	for(int i=1;i<=4;i++)
	{
		if(a[i]>m)
			{
			m=a[i];
			c[4]=c[3];
			c[3]=c[2];
			c[2]=c[1];
			c[1]=m;
			d[4]=d[3];
			d[3]=d[2];
			d[2]=d[1];
			d[1]=b[i];
			}
		else
		{
			c[i]=a[i];
			d[i]=b[i];
		}
	}
	char x1,x2,x3,x4;
	x1=d[1];
	x2=d[2];
	x3=d[3];
	x4=d[4];
	cout<<x1<<" "<<c[1]<<endl<<x2<<" "<<c[2]<<endl<<x3<<" "<<c[3]<<endl<<x4<<" "<<c[4];
}
	return 0;
}
