struct st
{
     char id[20];
     char name[20];
     char sex;
     int age;
     float goal;
     char address[20];
     struct st *last;
};

struct st *input(void)
{
       int n;
       struct st *end,*p1,*p2;
       n=0;
       p1=p2=(struct st *)malloc(sizeof(struct st));
       scanf("%s",p1->id);
       while(strcmp(p1->id,"end")!=0)
       {
            scanf("%s %c %d %f %s",p1->name,&p1->sex,&p1->age,&p1->goal,p1->address);
            if(n==0) p1->last=NULL;
            else p1->last=p2;
            p2=p1;
            p1=(struct st *)malloc(sizeof(struct st));
            scanf("%s",p1->id);
            n=1;
       }
       end=p2;
       return(end);
}

void output(struct st *end)
{
     struct st *p;
     p=end;
     if(end!=NULL)
        do
        {
              printf("%s %s %c %d ",p->id,p->name,p->sex,p->age);
              if(floor(p->goal)==p->goal) printf("%.0f",p->goal);
              else printf("%.1f",p->goal);
              printf(" %s\n",p->address);
              p=p->last;
        }while(p!=NULL);
}

int main()
{
     struct st *end;
     end=input();
     output(end);
}

