struct node
{
char data[10][20];
struct node *pre;
};
int main ()
{
int i,j;
struct node *p1,*p2;
p1=(struct node *)malloc(sizeof(struct node));
for (i=1;i<=6;i++)
cin>>(*p1).data[i];
p1->pre=NULL;
while((*p1).data[1][0]!='e')
{
p2=(struct node *)malloc(sizeof(struct node));
p2->pre=p1;
for (i=1;i<=6;i++)
cin>>(*p2).data[i];
p1=p2;
}
p1=p1->pre;
while(p1->pre)
{
for (i=1;i<=5;i++)
cout<<(*p1).data[i]<<' ';
cout<<(*p1).data[6]<<endl;
p1=p1->pre;
}
for (i=1;i<=5;i++)
cout<<(*p1).data[i]<<' ';
cout<<(*p1).data[6];
}
 
 
 