char a[200],b[200];
int main()
{
	int len1,len2,c[200]={0},p=0,i,j;
	cin>>a;
	cin>>b;
	len1=strlen(a);
	len2=strlen(b);
	if(len1!=len2)
		cout<<"NO"<<endl;
	else
	{
		for(i=0;i<len2;i++)
		{
			for(j=0;j<len1;j++)
			{
				if(b[i]==a[j]&&c[j]==0)
				{
					c[j]=1;break;
				}
			}
		}
		for(i=0;i<len1;i++)
		{
			if(c[i]==0)
			{
				cout<<"NO"<<endl;p=1;
				break;
			}
		}
		if(p==0)
			cout<<"YES"<<endl;
	}
	return 0;
}


				

			
