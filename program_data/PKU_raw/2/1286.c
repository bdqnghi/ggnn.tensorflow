int n=1,m;
struct zuozhe
{int num;
char ren[26];
struct zuozhe *next;
};
struct zuozhe *ap()
{
	struct zuozhe * head,*nw,*tn;
	do
	{
		nw=(struct zuozhe *)malloc(sizeof(struct zuozhe));
		scanf("%d%s",&nw->num ,nw->ren );
		if(n==1)
		{
			head=nw;
			tn=head;
		}
		else
			tn->next=nw;
		if(n<=m)
		{
			tn=nw;
			n++;
		}
	}while(n<=m);
	tn->next =NULL;
	return head;
}
int main()
{
	int i,max=0,a[26]={0},j,w,l;
	char z;
	struct zuozhe *head,*p;
	scanf("%d",&m);
	head=ap();
	p=head;
	for(;p!=NULL;p=p->next )
	{
		l=strlen(p->ren );
		for(i=0;i<l;i++)
		{
			j=p->ren [i]-65;
			a[j]++;
		}
	}
	for(i=0;i<26;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			w=i;
		}
	}
	z=65+w;
	printf("%c\n%d\n",z,max);
	p=head;
	for(;p!=NULL;p=p->next )
	{
		l=strlen(p->ren );
		for(i=0;i<l;i++)
		{
			if(p->ren [i]==z)
			{
				printf("%d\n",p->num );
				break;
			}
		}
	}
}