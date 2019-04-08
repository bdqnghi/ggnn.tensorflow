int n;
struct stu
{int num;
char name[27];
struct stu *next;
};

struct stu *creat()
{int i=0; struct stu *head, *p1,*p2;
head=p1=p2=(struct stu*)malloc(sizeof(struct stu));
scanf("%d %s", &p2->num,p2->name);
while(i<n-1)
{i++; p2=(struct stu*)malloc(sizeof(struct stu));
scanf("%d %s", &p2->num,p2->name);
p1->next=p2;
p1=p2;}
return head;}

void main()
{struct stu *p,*head;
int k,u,max=0,maxnum;
int a[26]={0};
	scanf("%d",&n);
head=p=creat();
for (k=0;k<n;k++)
			{for (u=0;p->name[u]!='\0';u++)
				a[p->name[u]-'A']++;
			p=p->next;
			} 
for(k=0;k<26;k++)
if(a[k]>max){max=a[k];maxnum=k;}
printf("%c\n%d\n",maxnum+'A',max);
p=head;
for(k=0;k<n;k++){
for(u=0;p->name[u]!='\0';u++)
if(p->name[u]==maxnum+'A'){printf("%d\n",p->num);break;}
p=p->next;
}}
