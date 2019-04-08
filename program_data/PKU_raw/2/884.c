struct book *head;
int abc[26];
struct book
{
	int num;
	char name[1000];
	struct book *next;
};

void ffind(char * name)
{
	while(*name!=0)
	{
		abc[*name-65]++;
		name++;
	}


}
int mfind(char * name,char a)
{
		while(*name!=0)
	{
		if(a==*name)return 1;
		name++;
	}

}

struct book* creat (int max)
{
	int n;
	struct book *p1,*p2;
	n=0;
	p1=p2=(struct book*)malloc(LEN);
	head=0;
	do
	{
		scanf("%d %s",&p1->num,&p1->name);
		ffind(p1->name);
		n++;
		if(n==1)head=p1;
		else p2->next=p1;
		p2=p1;
		p2->next=0;
		p1=(struct book*)malloc(LEN);
	}while(n<max);
	p2->next=0;
	return head;
}

void main()
{
	int n,i;
	int max=0,maxi=0;
	char tt[2];
	struct book *p,*p1;
	scanf("%d",&n);
	p=creat(n);
	p1=p;

	for(i=0;i<26;i++)
	{
	if(abc[i]>max)
	{max=abc[i];
	maxi=i;
	}
	}

	printf("%C\n%d\n",65+maxi,max);

	tt[0]=maxi+65;
	tt[1]=0;
	do{
		if(mfind(p1->name,maxi+65)==1){
			max--;
			if(max!=0)
			printf("%d\n",p1->num);
			else printf("%d",p1->num);
		}
		p1=p1->next;
	}while(p1!=0);

}