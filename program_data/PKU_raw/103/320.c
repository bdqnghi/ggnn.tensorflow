int main ()
{
	char a[1001],b[1001];
	char tmp[1000];
	int cnt[1000];
	int i,j,len;
	cin>>a;
	len=strlen(a);
	memset(tmp,'#',sizeof(tmp));
	memset(cnt,0,sizeof(cnt));
	for(i=0;i<len;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
			b[i]=a[i];
		else
			b[i]=a[i]-'a'+'A';
	}
	b[len]='\0';
	j=0;
	for(i=0;i<len;i++)
	{
		if(i==0)
		{
			tmp[j]=b[i];
			cnt[j]++;
		}
		else
		{
			if(b[i]==tmp[j])
			{
				cnt[j]++;

			}
			else
			{
				j++;
				tmp[j]=b[i];
				cnt[j]++;
			}
		}
	}
	for(i=0;i<=j;i++)
	{
		cout<<'('<<tmp[i]<<','<<cnt[i]<<')';
	}
	return 0;
}