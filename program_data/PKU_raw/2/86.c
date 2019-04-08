int main()
{
	int m;
	int i, j, a,n;
	struct book{
		int no;
		char name[30];
	}book[999];
	int author1[30]={0}, author2[30]={0};
	char k;
	scanf("%d", &m);
	for(i=0;i<m;i++)
		scanf("%d %s", &book[i].no, &book[i].name);
	for(i=0;i<m;i++){
		a = strlen(book[i].name);
		for(j=0;j<a;j++){
			for(k='A';k<='Z';k++){
				if(book[i].name[j]==k)
					author1[(int)k-65]++;
			}
		}
	}
	for(i=0;i<26;i++)
		author2[i]=author1[i];
	for(i=0;i<26;i++){
		for(j=i+1;j<26;j++){
			if(author1[i]<author1[j]){
				int tmp;
				tmp = author1[i];
				author1[i] = author1[j];
				author1[j]= tmp;
			}
		}
	}
	for(i=0;i<26;i++){
		if(author2[i] == author1[0]){
			printf("%c\n", (char)(65+i));
			printf("%d\n", author1[0]);
			for(j=0;j<m;j++){
				a = strlen(book[j].name);
				for(n=0;n<a;n++){
					if(book[j].name[n]==(char)(65+i)){
						printf("%d\n", book[j].no);
						break;
					}
				}
			}
		}
	}
	return 0;
}
