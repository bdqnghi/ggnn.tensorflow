
char *s;

int main()
{
	s = (char*)malloc(100000*sizeof(char));
	long count[26],p[26];
	int n;char cc;
	char key='-';
	int min=100001;
	int i;
	scanf("%d%c",&n,&cc);

	while(n--){
		gets(s);
		for(i=0;i<26;i++){
			count[i]=0;
			p[i] = 100001;
		}
		for(i=0;i<strlen(s);i++){
			count[*(s+i)-'a']++;
			if(p[*(s+i)-'a']>i)
				p[*(s+i)-'a']=i;
		}
		key='-';
		min=100001;
		for(i=0;i<26;i++){
			if(count[i]==1 && p[i]<min){
				key = 'a'+i;
				min = p[i];
			}
		}
		if(key=='-')
			printf("no\n");
		else
			printf("%c\n",key);
	}

	return 0;
}