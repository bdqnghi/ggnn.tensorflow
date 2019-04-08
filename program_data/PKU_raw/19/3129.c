


int main()
{
	char s[201],a[201],b[201],c[201];
	int i,j,la,lb,k,t,ls;
	gets(s);
    cin>>a>>b;
	la=strlen(a),lb=strlen(b),ls=strlen(s);
	for(i=0;i<100;i=i+1)
		c[i]=s[i];
	t=0;
	for(i=0;i<ls;i=i+1)
	{
		if(s[i]=='\0')
			break;
		for(j=0;j<la;j=j+1)
		{
			if(s[i+j]!=a[j])
				break;
		}
		if(j==la&&(s[i+la]==' '||s[i+la]=='\0')&&(s[i-1]==' '||i==0))
		{

			for(k=0;k<lb;k=k+1)
				s[i+k]=b[k];
			for(k=0;k<100;k=k+1)
				s[i+lb+k]=c[i+la+t*(la-lb)+k];
			t=t+1;
		}
	}
	cout<<s<<endl;
	return 0;
}

