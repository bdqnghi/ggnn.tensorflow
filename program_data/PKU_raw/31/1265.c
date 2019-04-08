struct stu{char id[20];char name[20];char sex;int age;char score[20];char address[20];struct stu *next;struct stu *former;};
struct stu *cr(void)
{struct stu *head,*end;
 struct stu *p1,*p2;
 int i=0;
 p1=p2=(struct stu*)malloc(LEN);
 scanf("%s",&p1->id);
 if(strcmp(p1->id,"end")!=0)
{	 scanf("%s %c %d %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);//printf("%s",p1->name);
	 head=NULL;
    	 while(1)
	{
		 i++;
		 if(i==1)  {head=p1;p1->former=NULL;}
		 else {p2->next=p1;p1->former=p2;}
		  p2=p1; p1=(struct stu*)malloc(LEN);
		 scanf("%s",&p1->id);
		  if(strcmp(p1->id,"end")==0)break;
			// printf("%s",p1->id);
		  scanf("%s %c %d %s %s",&p1->name,&p1->sex,&p1->age,&p1->score,&p1->address);
	}
		 

		  p2->next=NULL;
		  end=p2;
		  return (end);
	
 }
 else return(NULL);
}

void print(struct stu *end)
{
	

	struct stu *q=end;  // printf("%s",end->id);

	while(q!=NULL&&end!=NULL)
	{
		printf("%s %s %c %d %s %s\n",q->id,q->name,q->sex,q->age,q->score,q->address);
		q=q->former;//printf("%s",q->id);
	}
//printf("%s",q->id);
}

int main()
{struct stu *p;
  p=cr();

print(p);
return 0;
}
