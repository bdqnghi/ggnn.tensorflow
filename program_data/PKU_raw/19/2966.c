int main()
{
	char s[100][100]={0};//????
	char a[100]={0},b[100]={0},n=0;//????????????????   n???????????
	int i=0,k=0,kongzhi=0,x=0;//????
	for(i=0;;i++)//????
	{
		for(k=0;;k++)
		{
			s[i][k]=getchar();
			if(s[i][k]==' '||s[i][k]=='\n')
				break;
		}
		n++;//?????
		if(s[i][k]=='\n')
			break;
	}
	for(i=0;;i++)//??
	{
		a[i]=getchar();
		if(a[i]=='\n')
			break;

	}
	for(i=0;;i++)//??
	{
		b[i]=getchar();
		if(b[i]=='\n')
		{
			x=i;
			b[i]=' ';
			break;
		}

	}
	for(i=0;i<n;i++)//??
	{
		for(k=0;k<100;k++)
		{
			if(s[i][k]!=a[k]&&s[i][k]!=' '&&s[i][k]!='\n')
				kongzhi=1;
		} 
		if(kongzhi==0)
		{
			if(i==n-1)
				b[x]=0;
			for(k=0;k<100;k++)
				s[i][k]=b[k];
		}
		kongzhi=0;
	}
	for(i=0;s[i][k]!=0;i++)//??
	{
		for(k=0;s[i][k]!=0;k++)
			cout<<s[i][k];
		k=0;//?K?????????????????
	}
	return 0;
}
