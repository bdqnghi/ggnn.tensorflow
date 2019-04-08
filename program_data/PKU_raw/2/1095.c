struct book{
		int num;
		char aut[20];
	};
	
void main()
{
	int i,j,n,t,max=0;
	char a[20];
	int words[26]={0};
	struct book b[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	scanf("%d%s",&(b[i].num),&(b[i].aut));
		
	for(i=0;i<n;i++)
	for(j=0;b[i].aut[j]!='\0';j++){
		t=(int)b[i].aut[j]-65;
		words[t]++;
	}
	
	for(i=0;i<26;i++)
	if(words[i]>max)  { max=words[i];t=i;}
	printf("%c\n%d\n",t+65,max);
	
	for(i=0;i<n;i++)
	for(j=0;b[i].aut[j]!='\0';j++)
		if(b[i].aut[j]==(char)(t+65))
		printf("%d\n",b[i].num);
}
