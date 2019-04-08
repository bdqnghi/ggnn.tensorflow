


int main()
{struct ship
{
char name[20],o,w;
int score,cla,paper,totle; 
struct ship *next;
}n[100];
int T=0,N,i,m=0;char temp[20];
struct ship *head=&n[0],*p;
scanf("%d",&N);
for(i=0;i<N;i++)//????//
scanf("%s %d %d %c %c %d",n[i].name,&n[i].score,&n[i].cla,&n[i].o,&n[i].w,&n[i].paper);
for(i=0;i<N-1;i++)
n[i].next=&n[i+1];
n[N-1].next=NULL;



for(i=0;i<N;i++)     //scholarship for everyone//
{n[i].totle=0;
if(n[i].cla>80&&n[i].o=='Y') n[i].totle+=850;
if(n[i].score>85&&n[i].w=='Y') n[i].totle+=1000;
if(n[i].score>90) n[i].totle+=2000;
if(n[i].score>85&&n[i].cla>80) n[i].totle+=4000;
if(n[i].score>80&&n[i].paper) n[i].totle+=8000;}

for(i=0;i<N;i++)                 //sort the scholarships ; incresing//
if(n[m].totle<n[i].totle) m=i;

p=head;
do{
 T+=p->totle;
 p=p->next;}        //T is the entire scholarship// 
while(p!=NULL);
printf("%s\n%d\n%d",n[m].name,n[m].totle,T);
return 0;
}