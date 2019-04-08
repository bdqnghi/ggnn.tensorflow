struct Patient{
	char id[10];
	int age;
	struct Patient *next;
	struct Patient *pre;
};
struct Patient *creat(int x);
struct Patient *sort(struct Patient *);
void print(struct Patient *);

int main()
{
	struct Patient *patient,*patient2;
	int n,i;
	scanf("%d",&n);
	patient=creat(n);
	patient2=sort(patient);
	print(patient2);
}

struct Patient *creat(int x){
struct Patient *p1,*p2,*head,*p;
int i;
	head = NULL;
	for (i=0;i<x;i++){
		p1 = (struct Patient *)malloc(Len);
		if (i==0) {head = p1;head->pre = NULL;}
		else {p2->next = p1;p1->pre = p2;}
		p2 = p1;
		scanf("%s%d",p1->id,&p1->age);
	}
	p1->next = NULL;
	return head;
}

struct Patient *sort(struct Patient *head){
struct Patient *p1,*p2,*temp,*p;	
temp = (struct Patient *)malloc(Len); 
	p1 = p2 =head;
	while (p1){
		if (p1->age>=60){
			p2 = p1->next;
		    while (p2){
				if (p2->age>p1->age){
					temp->age = p2->age;
					strcpy(temp->id,p2->id);
					p = p2;
					while (p->pre != p1){
						strcpy(p->id,p->pre->id);				
						p->age = p->pre->age;
						p = p->pre;
					}
					strcpy(p->id,p1->id);				
					p->age = p1->age; 
					p1->age = temp->age;
					strcpy(p1->id,temp->id);
		         }
		         p2 = p2->next;
			}
		}
		p1 = p1->next;
	}
  return head;
}
	
void print(struct Patient *head){
struct Patient *p1,*p2,*p;	
p = head;
	while (p){
		if (p->age>=60){
			printf("%s\n",p->id);
		}
		p = p->next;
	}
	p = head;
	while (p){
		if (p->age<60){
			printf("%s\n",p->id);
		}
		p = p->next;
	}
}