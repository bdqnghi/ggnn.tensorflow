int main()
{
	int z,q,s,l,a[100],c[100],i,j,t1,t2;
	char b[5];
	for (z=1;z<=5;z++)
	{
		for (q=1;q<=5;q++)
			for (s=1;s<=5;s++)
				for (l=1;l<=5;l++)
				{
					if ((z+q==s+l)+((z+l)>(s+q))+((z+s)<q)+(z!=q)+(z!=s)+(z!=l)+(q!=s)+(q!=l)+(s!=l)==9)
					{
						a[0]=z,b[0]='z',c[0]=0;
						a[1]=q,b[1]='q',c[1]=1;
						a[2]=s,b[2]='s',c[2]=2;
						a[3]=l,b[3]='l',c[3]=3;
					}
				}
	}
	for (i=0;i<4;i++)
	{
		for (j=0;j<4-i;j++)
			if(a[j]<a[j+1])
			{
				t1=a[j];a[j]=a[j+1];a[j+1]=t1;
				t2=c[j];c[j]=c[j+1];c[j+1]=t2;

			}
	}
	for (i=0;i<4;i++)
		cout<<b[c[i]]<<" "<<a[i]<<0<<endl;
		
	return 0;
}