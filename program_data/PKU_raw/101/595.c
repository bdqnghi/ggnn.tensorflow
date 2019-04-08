int main()
{
	char a[3],T;
	int b[3];
	int i,j,k,f,t,p[3];
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			for(k=0;k<3;k++)
			{
				p[0]=((i<j)+(i==k)+i);
				p[1]=((i>j)+(i>k)+j);
				p[2]=((k>j)+(j>i)+k);
				if(p[0]==2&&p[1]==2&&p[2]==2)
				{
					b[0]=i;
					b[1]=j;
					b[2]=k;
					a[0]='A';
					a[1]='B';
					a[2]='C';
				}
			}
			for(int u=0;u<2;u++)
				for(int r=0;r<2-u;r++)
				{
					if(b[r]>b[r+1])
					{
						t=b[r];
						b[r]=b[r+1];
						b[r+1]=t;
						T=a[r];
						a[r]=a[r+1];
						a[r+1]=T;
					}
				}
				for(int u=0;u<3;u++)
					cout<<a[u];
				
				return 0;
}
