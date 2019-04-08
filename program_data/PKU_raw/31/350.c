



struct a {
char id[150];

struct a *pre;
};


struct a *creat(){

struct a *head, *p1, *p2;

p1=(struct a*)malloc(l);
gets(p1->id);
p1->pre=NULL;

p2=p1;

while(1){
p1=(struct a*)malloc(l);
gets(p1->id);
if (p1->id[0]=='e'){break;}
p1->pre=p2;
p2=p1;
}
free(p1);
head=p2;
return head;
}

void des(struct a *head){
struct a *p;
while(head){
p=head;
head=head->pre;
free(p);
}
}

int main (){
struct a *head, *p;
head=creat();

p=head;
while(p){
printf("%s\n", p->id);
p=p->pre;
}

des(head);
return 0;
}