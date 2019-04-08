struct jisuan{
         int num;
	char name[26];
}book[1000];
int main()
{
	int i,j,m,n,k,e;
	int count[26]={0},author[26];
	scanf("%d",&m);
	for(i=0;i<26;i++)
	         author[i]=65+i;
	for(i=0;i<m;i++){
		scanf("%d",&book[i].num);
		gets(book[i].name);
	}
	for(i='A';i<='Z';i++){
		for(j=0;j<m;j++){
			n=strlen(book[j].name);
			for(k=0;k<n;k++){
				if(i==book[j].name[k])
					count[i-65]++;
			}
		}
	}
	for(i=0;i<25;i++){
		if(count[i]>count[i+1]){
			e=count[i];
			count[i]=count[i+1];
			count[i+1]=e;
			e=author[i];
			author[i]=author[i+1];
			author[i+1]=e;
		}
	}
	printf("%c\n%d\n",author[25],count[25]);
	for(i=0;i<m;i++){
		n=strlen(book[i].name);
		for(k=0;k<n;k++){
			if(book[i].name[k]==author[25])
				printf("%d\n",book[i].num);
		}
	}
	return 0;
}