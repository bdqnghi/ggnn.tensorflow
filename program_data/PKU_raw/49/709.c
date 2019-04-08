int main()
{
	char s[500];
	int i=0,j=0,k=0,l=0,t=0,p=0;
	int a[500];
	cin>>s;
	for(i=0;;i++)
	{
		if(s[i]=='\0')
			break;
		l++;
	}
	for(i=0;i<l-1;i++)
	{
		if(s[i]==s[i+1])
		{	
			a[j++]=i;
			cout<<s[i]<<s[i+1]<<endl;
		}
	}
	for(k=1;k<l/2;k++){
		for(i=0;i<j;i++){
			int m=0;
			for(t=1;t<=k;t++){
				if(a[i]-t<0||a[i]+1+t>l-1)
					break;
				else
				{
					if(s[a[i]-t]==s[a[i]+1+t])
                       m++;
				}
			}
			if(m==k)
			{
				for(p=a[i]-k;p<=a[i]+1+k;p++)					
					cout<<s[p];
			        cout<<endl;
			}
		}
	}
	return 0;      
}