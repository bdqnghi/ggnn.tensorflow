int main()
{
	int z,q,s,l;
	int m0,m1,m2,m3;
	int n0,n1,n2,n3;
	int a[4],b[4];
	int i;
	b[0]='z';b[1]='q';b[2]='s';b[3]='l';
	for(z=10;z<=50;z+=10)
	{
		for(q=10;q<=50;q+=10)
		{
			for(s=10;s<=50;s+=10)
			{
				for(l=10;l<=50;l+=10)
				{
					if(z+q==s+l&&z+l>s+q&&z+s<q)
					{
						a[0]=z;a[1]=q;a[2]=s;a[3]=l;
						for(i=0;i<=3;i++)
						{
							if(a[i]>=a[0]&&a[i]>=a[1]&&a[i]>=a[2]&&a[i]>=a[3])
							{
								m0=a[i];n0=b[i];a[i]=0;break;
							}
						}
						for(i=0;i<=3;i++)
						{
							if(a[i]>=a[0]&&a[i]>=a[1]&&a[i]>=a[2]&&a[i]>=a[3])
							{
								m1=a[i];n1=b[i];a[i]=0;break;
							}
						}
						for(i=0;i<=3;i++)
						{
							if(a[i]>=a[0]&&a[i]>=a[1]&&a[i]>=a[2]&&a[i]>=a[3])
							{
								m2=a[i];n2=b[i];a[i]=0;break;
							}
						}
						for(i=0;i<=3;i++)
						{
							if(a[i]>=a[0]&&a[i]>=a[1]&&a[i]>=a[2]&&a[i]>=a[3])
							{
								m3=a[i];n3=b[i];a[i]=0;break;
							}
						}
						printf("%c %d\n%c %d\n%c %d\n%c %d\n",n0,m0,n1,m1,n2,m2,n3,m3);
					}
				}
			}
		}
	}
	return 0;
}
