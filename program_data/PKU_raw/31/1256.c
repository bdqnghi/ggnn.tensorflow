struct student{char xh[20];char name[50];char sex;int age;char gra[10];char adds[50];struct student *next;};

void main()
{

	struct student *pa,*pb;
	int i;
	pa=pb=(struct student*)malloc(l);
	for(i=0; ;i++)
	{   scanf("%s",pa->xh);
	    if(pa->xh[0]=='e') break;
		scanf("%s %c %d %s %s",pa->name,&pa->sex,&pa->age,pa->gra,pa->adds);
		if(i==0) {pa->next=NULL;}
	    else pa->next=pb;
	    pb=pa;
	    pa=(struct student*)malloc(l);
	}
	
	while(pb!=NULL) {printf("%s %s %c %d %s %s\n",pb->xh,pb->name,pb->sex,pb->age,pb->gra,pb->adds);pb=pb->next;}
}
