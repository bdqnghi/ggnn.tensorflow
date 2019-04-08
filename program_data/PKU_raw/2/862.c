struct book
{
	int num;
	char aut[26];
};

int main()
{
	int i,j,k,m,x,a=0;
	int count[26]={0};
	char y;
	struct book all[1000];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d%s",&all[i].num,&all[i].aut);
	}
	for(i=0;i<m;i++){
		for(j=0;j<26;j++){
			if(all[i].aut[j]>='A'&&all[i].aut[j]<='Z'){
				x=(int)(all[i].aut[j]-'A');
				count[x]++;
			}
		}
	}
	for(i=0;i<26;i++){
		if(count[i]>a){
			a=count[i];
			k=i;
		}
	}
	y=k+'A';
	printf("%c\n%d\n",y,a);
	for(i=0;i<m;i++){
		for(j=0;j<26;j++){
			if(all[i].aut[j]==y){
				printf("%d\n",all[i].num);
				break;
			}
		}
	}
	return 0;
}
