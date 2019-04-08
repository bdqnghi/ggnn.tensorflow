char a[100],sub[1000][100];
int l,sublen,cnt=0;
void jud(char t[100])
{
	int i,j,k;
	char s1[50],s2[50];
	memset(s1,'\0',sizeof(s1));
	memset(s2,'\0',sizeof(s2));
	if (strlen(t)%2==1)
	{
		for (i=strlen(t)/2-1;i>=0;i--)
		{
			s1[strlen(t)/2-1-i]=t[i];
		}
		for (i=strlen(t)/2+1;i<strlen(t);i++)
		{
			s2[i-strlen(t)/2-1]=t[i];
		}
	}
	else
	{
		for (i=strlen(t)/2-1;i>=0;i--)
		{
			s1[strlen(t)/2-1-i]=t[i];
		}
		for (i=strlen(t)/2;i<strlen(t);i++)
		{
			s2[i-strlen(t)/2]=t[i];
		}
	}
	for (i=1;i<=cnt;i++)
	{
		if (strcmp(sub[i],t)==0||strlen(t)==1)
			break;
		else
		{
			if (strcmp(s1,s2)==0)
				cout<<t<<endl;
			break;
		}
	}
}
void fen(int sl)
{
	int i,j;
	for (i=0;i<=l-sl;i++)
	{
		cnt++;
		for (j=0;j<sl;j++)
		{
			sub[cnt][j]=a[i+j];
		}
	}
}
void d()
{
	int i;
	l=strlen(a);
	memset(sub,'\0',sizeof(sub));
	for (sublen=2;sublen<=l;sublen++)
	{
		fen(sublen);
	}
	for (i=1;i<=cnt;i++)
	{
		jud(sub[i]);
	}
}
int main()
{
	cin>>a;
	d();
	return 0;
}