struct word
{
	char w[20];
	int a;
} word[1000];

int main(int argc, char* argv[])
{
	int i,j,n,line;
	struct word *p;
	p=&word[0];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%s",&p->w);
		p->a=strlen(p->w);
		p++;
	}
	p=&word[0];
	for(i=1;i<=n;i++){
		if(i==1){
			printf("%s",p->w);
			line=p->a;
			p++;
		}else if(line+p->a+1>80){
			printf("\n%s",p->w);
			line=p->a;
			p++;
		}else{
			printf(" %s",p->w);
			line+=p->a+1;
			p++;
		}
	}

	return 0;
}
