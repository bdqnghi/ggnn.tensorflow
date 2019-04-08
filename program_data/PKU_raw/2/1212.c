struct score
{
	char id[10];
	char name[26];
}book[1000];
int main()
{
	int i,j,k,n,num,max=0;
	char maxname;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%s",book[i].id);
		scanf("%s",book[i].name);
	}
	for(i=0;i<26;i++){
		n=0;
		for(j=0;j<num;j++){
			for(k=0;k<26;k++){
				if(book[j].name[k]==('A'+i))n+=1;
			}
		}
		if(n>max){
			maxname='A'+i;
			max=n;
		}
	}
	printf("%c\n%d\n",maxname,max);
	for(j=0;j<num;j++){
		for(k=0;k<26;k++){
			if(book[j].name[k]==maxname)printf("%s\n",book[j].id);;
		}
	}
	return 0;
}

