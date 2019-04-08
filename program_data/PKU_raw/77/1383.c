

int n,vis[510];
char s[510];

void dfs(int p,int q)
{
	for(;vis[p];p++);
	if (p>=n) return;
	if (s[p]!=s[0])
		cout<<q<<' '<<p<<endl,vis[p]=vis[q]=1;
	else
		for(;!vis[p];) dfs(p+1,p);
}

int main()
{
	cin>>s;
	n=strlen(s);
	dfs(0,-1);
	return 0;
}
