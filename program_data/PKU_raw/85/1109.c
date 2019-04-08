
int main(int argc, char* argv[])
{
	int n,i,m,j,add=0;
	char sz[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",sz);
		m=strlen(sz);
		for(j=0;j<m;j++){
			if((sz[j]>='A'&&sz[j]<='Z'||sz[j]>='a'&&sz[j]<='z'||sz[j]=='_'||sz[j]>='0'&&sz[j]<='9')){
				if(j==0&&(sz[j]<'0'||sz[j]>'9'))
					add++;
				if(j>0)
					add++;
			}
		}
		if(add==m)
			printf("yes\n\n");
		else
			printf("no\n\n");
		add=0;
	}
	return 0;
}