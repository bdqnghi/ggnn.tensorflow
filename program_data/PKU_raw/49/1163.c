int max(int a,int b);
int main()
{
	char a[500],b[250][500],p;
	int n,m,i,j,k,l[250],s,t=0;
	cin.getline(a,500);
	n=strlen(a);
	for(i=0;i<n-1;i++)
		for(j=0;i>=j&&a[i-j]==a[i+1+j];j++)
		{
			for(k=i-j;k<=i+j+1;k++)
			{
				b[t][k-i+j]=a[k];
			}
			l[t]=2*(j+1);
			t++;
		}
	for(i=0;i<n-2;i++)
		for(j=0;i>=j&&a[i-j]==a[i+2+j];j++)
		{
			for(k=i-j;k<=i+j+2;k++)
			{
				b[t][k-i+j]=a[k];
			}
			l[t]=2*(j+1)+1;
			t++;
		}
	m=t;
	for(i=0;i<m-1;i++)
		for(j=0;j<m-1;j++)
			if(l[j]>l[j+1])
			{
				for(k=0;k<max(l[j],l[j+1]);k++)
				{
					p=b[j][k];
					b[j][k]=b[j+1][k];
					b[j+1][k]=p;
				}
				s=l[j];
				l[j]=l[j+1];
				l[j+1]=s;
			}
	for(i=0;i<m;i++)
	{
		for(j=0;j<l[i];j++)
			cout<<b[i][j];
		cout<<endl;
	}
	return 0;
}
int max(int a,int b)
{
	if(a<b)
		return b;
	else
		return a;
}