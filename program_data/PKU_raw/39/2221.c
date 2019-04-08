//???????

struct data{

char a[20];
int b;
int c;
char d[10];
char e[10];
int f;
int g;
struct data *next;
};

int main() {
	struct data *head,*p,*pp;
	head=(struct data*)malloc(sizeof(struct data));
	p=head;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		pp=(struct data*)malloc(sizeof(struct data));
		pp->g=0;
		scanf("%s %d %d %s %s %d",pp->a,&pp->b,&pp->c,pp->d,pp->e,&pp->f);
		if(pp->b>80&&pp->f>0) pp->g=pp->g+8000;
		if(pp->b>85&&pp->c>80) pp->g=pp->g+4000;
		if(pp->b>90) pp->g=pp->g+2000;
		if(pp->b>85&&pp->e[0]=='Y') pp->g=pp->g+1000;
		if(pp->c>80&&pp->d[0]=='Y') pp->g=pp->g+850;
		p->next=pp;
		p=pp;
	}
	p=head->next;
	struct data *x;
	int max=0,zz=0;

	for(i=0;i<n;i++) {
		if(p->g>max) {
			max=p->g;
			x=p;
		}
		zz=zz+p->g;
		p=p->next;
	}

	printf("%s\n",x->a);
	printf("%d\n",x->g);
	printf("%d\n",zz);
}