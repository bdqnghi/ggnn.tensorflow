struct patient
{
	char id[20];
	int age;
	struct patient *next;
};
void main()
{
	struct patient *head,*p1,*p2,*p0;
	int i,n;
	scanf("%d",&n);
	p1=p2=(struct patient*)malloc(LEN);
	head=NULL;
	for(i=0;i<n;i++){
		scanf("%s %d",&p1->id,&p1->age);
		p1->next=NULL;
		if(i==0){head=p1; }
		else{
			if((p1->age>60)&&(p1->age>head->age)){p0=head;p1->next=p0;head=p1;}
			else{
				p0=head;
				p2=head->next;
				if((p1->age)<60){
					while(p2!=NULL){ p0=p2;p2=p2->next;}
					p0->next=p1;
				}
				else{
					while((p2!=NULL)&&((p1->age)<=(p2->age))){p0=p2;	p2=p2->next;}
					p0->next=p1;
					p1->next=p2;
				}
			}
		}
		p1=(struct patient*)malloc(LEN);
	}
	
	p1=head;
	for(i=0;i<n-1;i++){
		printf("%s\n",p1->id);
		p1=p1->next;
	}
	printf("%s",p1->id);
}