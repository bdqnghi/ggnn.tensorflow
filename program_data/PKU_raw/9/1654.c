
struct queue
{
	char ID[11];
	int age;
	struct number * next;
};
int r=1;
struct queue * AppendNewNode(int n);

void main()
{
    int n,i,j,a[100]={0},temp;
	char temp_2[11]={""};
	struct queue *head, *p,*pf,*temp_1;
	
	scanf("%ld",&n);

	head=AppendNewNode(n);
    p=head;
  while(p!=NULL)
	{
		scanf("%s %d\n",&p->ID,&p->age);
		p=p->next;
	}
  p=head;
 // p=p->next;
   //  printf("%d\n",p->age);
for(i=0;i<n;i++)
	{
		a[i]=p->age;
		p=p->next;
	}   
     //printf("%d\n",a[1]);
 p=head;
 pf=head;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j+1]>=60&&a[j]<a[j+1]) {
					temp=a[j];a[j]=a[j+1];a[j+1]=temp;
				pf=p->next;temp=p->age;p->age=pf->age;pf->age=temp;strcpy(temp_2,p->ID);strcpy(p->ID,pf->ID);strcpy(pf->ID,temp_2);p=p->next;
				}
				else {p=p->next;}
			}
		   p=head;
		}

	p=head;
   //  printf("%d\n",p->age);
   
	while(p!=NULL)
	{
		printf("%s\n",p->ID);
		p=p->next;
		
	}

}

struct queue * AppendNewNode(int n)
{

	struct queue *head=NULL, *newNode, *thisNode;
	do{
		newNode=(struct number *) malloc(sizeof(struct queue));
		if(r==1)
		{
			head=newNode;
			thisNode=head;
		}
		else 
			thisNode->next=newNode;
		if(r<=n)
		{
			thisNode=newNode;
			r++;
		}
	}while(r<=n);
	thisNode->next=NULL;
	return(head);
}