struct hz
{
    int num;
struct hz *next;
}hz[300];
void main()
{
struct hz *head, *p1, *p2;
    int i,j,t=0,k;
int n[300],m[300];
for(i=0;i<300;i++)
{
scanf("%d%d",&n[i],&m[i]);
t++;
if(n[i]==0&&m[i]==0)
break;
}

for(i=0;i<t-1;i++)
{
for(j=0;j<n[i]-1;j++)
{
    hz[j].num=j+1;
    hz[j].next=&hz[j+1];
}
hz[n[i]-1].num=n[i];
hz[n[i]-1].next=&hz[0];
        
if(m[i]!=1)
{
    head=&hz[0];
    for(j=0;j<n[i]-1;j++)
{ 
    p1=head;

                for(k=0;k<m[i]-2;k++)
  p1=p1->next;

     p2=p1;
     p1=p1->next;
     p2->next=p1->next;
     head=p1->next;
}
    printf("%d\n",head->num);
}
else
printf("%d\n",n[i]);
}


}



