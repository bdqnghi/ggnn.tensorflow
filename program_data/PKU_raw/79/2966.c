


int n,m;
int flag[400];

int inc(int x){
	if(++x==n+1)
		x=1;
	return x;
}

int main(){

	//freopen("a.txt","r",stdin);

	while(scanf("%d%d",&n,&m),n||m){
		memset(flag,0,sizeof flag);
		int cnt=n,now=0;
		while(cnt>1){
			for(int i=0;i<m;i++)
				for(now=inc(now);flag[now];now=inc(now));
			flag[now]=1;
			cnt--;
			
		}
		for(now=inc(now);flag[now];now=inc(now));
		printf("%d\n",now);
	}

	return 0;
}