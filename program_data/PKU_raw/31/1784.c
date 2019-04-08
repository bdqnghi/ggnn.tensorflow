//#include<stdlib.h>//
struct student
{
        struct student *bef;
        char n[10];
        char s[20];
        char sex;
        int age;
        char score[10];
        char address[20];
        struct student *next;
};
int n;
struct student *creat(void)
{
       
        struct student *p1,*p2;
        n=0;
        p1=p2=(struct student*)malloc(LEN);
        
                scanf("%s %s %c %d %s %s",(p1->n),(p1->s),&(p1->sex),&(p1->age),p1->score,p1->address);
                
                while(p1->n[0]!='e')
                {
                        n=n+1;
                        if(n==1)
                        {
                             
                             p1->bef=NULL;
                        }
                        else 
                        {
                                p2->next=p1;
                                p1->bef=p2;
                        }
                        p2=p1;
                        p1=(struct student*)malloc(LEN);
						
                        scanf("%s %s %c %d %s %s",p1->n,p1->s,&(p1->sex),&(p1->age),p1->score,p1->address);
			            
                }
                p2->next=NULL;
                
		
		return(p2);
}


        int main()
        {
                struct student *p;
                p=creat();
                do
                {
                        printf("%s %s %c %d %s %s\n",p->n,p->s,p->sex,p->age,p->score,p->address);
                        p=p->bef;
                }while(p!=NULL);
        return 0;
        }



