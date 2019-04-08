int main()
{
	int z,q,s,l,i,j,k;
	for(i=1;i<=5;i++)
	{
		z=i;
		for(j=1;j<=5;j++)
		{
			q=j;
			for(k=1;k<=5;k++)
			{
				s=k;
				l=z+q-s;
				if(z+l>s+q&&z+s<q&&z!=s&&z!=l&&l<=5)
				{
					int a[5]={0,z,q,s,l},m,m2,t;
					for(m=1;m<4;m++)
					{
						for(m2=1;m2<=4-m;m2++)
						{
							if(a[m2]<a[m2+1])
							{t=a[m2];a[m2]=a[m2+1];a[m2+1]=t;}
						}
					}
					for(m=1;m<=4;m++)
					{
						if(a[m]==z)
							cout<<'z'<<" "<<a[m]*10<<"\n";
						if(a[m]==q)
							cout<<'q'<<" "<<a[m]*10<<"\n";
						if(a[m]==s)
							cout<<'s'<<" "<<a[m]*10<<"\n";
						if(a[m]==l)
							cout<<'l'<<" "<<a[m]*10<<"\n";
					}
				}
			}
		}
	}
	return 0;
}