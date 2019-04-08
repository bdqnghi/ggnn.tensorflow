struct book
{  int n;
   char name[26];
   struct book *next;
};
struct book *head;
int m;
struct book *creat()
{struct book *p1,*p2;
 int i=0;
 p1=p2=(struct book*)malloc(LEN);
 scanf("%d %s",&p1->n,p1->name);
 head=NULL;
 while(i<m-1)
 {i=i+1;
 if(i==1) head=p1;
 else p2->next=p1;
 p2=p1;
 p1=(struct book*)malloc(LEN);
 scanf("%d %s",&p1->n,p1->name);
 }
 p2->next=p1;
 p1->next=NULL;
 return(head);
}
void main()
{
	int i,j,*p,max=0,n;
	struct book *p1;
	p=(int*)calloc(26,sizeof(int));
	scanf("%d",&m);
	creat();
	p1=head;
	for(i=65;i<=90;i++)
	{
		p1=head;
		do
		{
		for(j=0;(p1->name)[j]!='\0';j++)
			if((p1->name)[j]==i) *(p+i-65)=*(p+i-65)+1;
		p1=p1->next;
		}while(p1!=NULL);
	}
	for(i=0;i<26;i++,p++)
	{
		if(*p>max)
		{
			max=*p;
			n=i;
		}
	}
	printf("%c\n",n+65);
	printf("%d\n",max);
	p1=head;
	do
	{
      for(j=0;(p1->name)[j]!='\0';j++)
	  {    
		  if((p1->name)[j]==n+65) 
			  printf("%d\n",p1->n);
	  }
		p1=p1->next;
	}while(p1!=NULL);
}




