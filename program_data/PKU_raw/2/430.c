struct shu
{
	int num;
	char a[26];
	struct shu*next;
};
int main()
{
	char ma='A';
	struct shu *p1,*p2;
	struct shu*head,*p;
	int cnt[128]={0};
	int i,j,n,m;
	scanf("%d",&n);
	p1=p2=(struct shu*)malloc(l);
	scanf("%d%s",&p1->num,p1->a);
	m=strlen(p1->a);
	for(j=0;j<m;j++){
		if(++cnt[p1->a[j]]>cnt[ma])
			ma=p1->a[j];
	}
	head=NULL;
	for(i=1;i<n;i++){
		if(i==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct shu*)malloc(l);
		scanf("%d%s",&p1->num,p1->a);
		m=strlen(p1->a);
		for(j=0;j<m;j++){
			if(++cnt[p1->a[j]]>cnt[ma])
				ma=p1->a[j];
		}
	}
	p2->next=p1;
	p2=p1;
	p2->next=NULL;
	p=head;
	printf("%c\n%d\n",ma,cnt[ma]);
	while(p!=NULL){
		m=strlen(p->a);
		for(i=0;i<m;i++){
			if(p->a[i]==ma){
			printf("%d\n",p->num);
			break;
			}
		}
		p=p->next;
	}
	return 0;
}
