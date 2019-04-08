int main()
{struct student
{char name[20],o,w;
int score,cla,paper;
}n[100];
int t=0,N,i,j,m[100],e[100],k;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%s %d %d %c %c %d",n[i].name,&n[i].score,&n[i].cla,&n[i].o,&n[i].w,&n[i].paper);}
for(i=0;i<N;i++)
{m[i]=0;
if(n[i].cla>80&&n[i].o=='Y') m[i]+=850;
if(n[i].score>85&&n[i].w=='Y') m[i]+=1000;
if(n[i].score>90) m[i]+=2000;
if(n[i].score>85&&n[i].cla>80) m[i]+=4000;
if(n[i].score>80&&n[i].paper) m[i]+=8000;}
for(i=0;i<N;i++)
e[i]=i;
for(i=0;i<N;i++)
for(j=i;j<N;j++)
{if(m[e[i]]<m[e[j]]) {k=e[i];e[i]=e[j];e[j]=k;}}
printf("%s\n%d\n",n[e[0]].name,m[e[0]]);
for(i=0;i<N;i++)
 t+=m[i];
printf("%d",t);
return 0;}