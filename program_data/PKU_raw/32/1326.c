int main()
{
	char a[102] , b[102] ;
	int n, i=0, j=0 ,lena, lenb;
	cin>>n;
	for(i=0; i<n; i++)
	{
		int p[102]={0};
		int q[102]={0};
		
		cin>>a>>b;
		lena=strlen(a);
		lenb=strlen(b);
		for(j=0; j<lena; j++)
		{
			 p[j]=a[lena-j-1]-'0';
		}
		for(j=0; j<lenb; j++)
		{
			 q[j]=b[lenb-j-1]-'0';
		}
		for(j=0; j<=lena; j++)
		{
			 if(p[j]<q[j])
		{
			p[j+1]--;
			p[j]=p[j]-q[j]+10;
		}
			else
				p[j]-=q[j];
		}
		int temp=1;
		for(j=lena; j>=0; j--)
		{
			
			if(p[j]==0 && temp==1)
				continue;
			if(p[j]!=0)
			{
				cout<<p[j];
				temp=0;
			}
			if(p[j]==0)
				cout<<p[j];
		}
		cout<<endl;
	}
	return 0;
}
		 
