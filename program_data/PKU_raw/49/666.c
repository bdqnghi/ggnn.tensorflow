int main()
{
	char a[505],tem1[505],tem2[505],b[505][505];
	int len1,p=0,m=1,len[505],count[505];
	cin.getline(a,504,'\n');//?????
	len1=strlen(a)-1;//???????? 
	for(int i=1;i<=504;i++)
		count[i]=i;
	for(int i=0;i<=len1-1;i++)
	{
		for(int j=i+1;j<=len1;j++)//????????????b?
		{
			memset(tem1,'\0',sizeof(tem1));
			memset(tem2,'\0',sizeof(tem2));
			p=0;
			for(int k=i;k<=j;k++)
			{
				tem1[p]=a[k];
				p++;
			}
			p=0;
			for(int k=j;k>=i;k--)
			{
				tem2[p]=a[k];
				p++;
			}
			if(strcmp(tem1,tem2)==0)
			{
				strcpy(b[m],tem1);
				m++;
			}
		}
	}
	for(int i=1;i<=m-1;i++)//???????? ???
	{
		len[i]=strlen(b[i]);
	}
	for(int i=1;i<=m-2;i++)//????
		for(int j=1;j<=m-1-i;j++)
		{
			if(len[j]>len[j+1])
			{
				int f=len[j];
				len[j]=len[j+1];
				len[j+1]=f;
				int g=count[j];
				count[j]=count[j+1];
				count[j+1]=g;
			}
		}
	for(int i=1;i<=m-1;i++)//????? 
		cout<<b[count[i]]<<endl;
	return 0;
}