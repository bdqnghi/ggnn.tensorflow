//#include <memory.h>
struct information
{char info[50];
 struct information*next;
};

struct information* creat()
{struct information *head,*p1,*p2;
 p1=p2=(struct information*)malloc(len);
 p1->next=NULL;
 gets(p1->info);
 while(strcmp(p1->info,"end")!=0)
	{p2=p1;
	 p1=(struct information*)malloc(len);
     gets(p1->info);
	 p1->next=p2;
	 }
 return p2;
} 

void print(struct information*head)
{
 while(head!=NULL)
	{printf("%s\n",head->info);
     head=head->next;
	}
}

main()
{struct information*head;
 head=creat();
 print(head);
}