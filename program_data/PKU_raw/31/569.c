struct student 
{char num[20];
char name[20];
char sex;
int age;
char score[20];
char add[20];
struct student *next;
};
int main()
{
struct student *p;
struct student *p1,*p2;
p1=(struct student*)malloc(len);
(*p1).next=0;
scanf("%s",(*p1).num);
while((*p1).num[0]!='e'){
scanf("%s %c %d %s %s",(*p1).name,&(*p1).sex,&(*p1).age,(*p1).score,(*p1).add);
p2=p1;
p1=(struct student*)malloc(len);
(*p1).next=p2;
scanf("%s",(*p1).num);
}
p=p2;
while(p){
printf("%s %s %c %d %s %s\n",(*p).num,(*p).name,(*p).sex,(*p).age,(*p).score,(*p).add);
p=(*p).next;
}
return 0;
}
