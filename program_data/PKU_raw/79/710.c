struct hou
{int k;
struct hou *next;
};
int main(int argc, char *argv[])
{int i,j,k,n,m;
struct hou *head,*p1,*p2;

while(1)
{
        scanf("%d%d",&n,&m);
        if(n==0&&m==0)
        break;
        head=(struct hou*)malloc(sizeof(struct hou));
p1=head;
        for(i=1;i<=n;i++)
        {if(i==n)
        {p1->k=n;p1->next=head;}
        else
        {p2=p1;
        p1=(struct hou*)malloc(sizeof(struct hou));
        p2->k=i;
        p2->next=p1;
        }}
        p1=head;
        p2=head;
        for(i=1;i<=n-1;i++)
        {
                           for(j=1;j<=m-1;j++)
                           {p2=p1;
                           p1=p1->next;}
                           p2->next=p1->next;
                           p1=p1->next;
        }
        printf("%d\n",p1->k);
}
  
    return 0;
}
