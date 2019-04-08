
char s[100000],e[100000];
int f[1010];

int main()
{
	int i,j,st,et,ans,k;
	scanf("%s%s",s,e);
	for(i=0;i<1010;i++)f[0]=0;
	ans=0;
	i=j=0;
	while(s[i]!='\0'&&e[j]!='\0')
	{
		st=et=0;
		while(s[i]>='0'&&s[i]<='9'){st*=10;st+=s[i]-'0';i++;}
		i++;
		while(e[j]>='0'&&e[j]<='9'){et*=10;et+=e[j]-'0';j++;}
		j++;
		ans++;
		for(k=st;k<et;k++)
			f[k]++;
	}
	int max=-1;
	for(i=0;i<1010;i++)
		if(f[i]>max)max=f[i];
	printf("%d %d\n",ans,max);
	
	return 0;
}