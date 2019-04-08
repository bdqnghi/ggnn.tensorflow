/****???:???****/
/**??:2012?3?5?**/
/**??:1100012450****/
/**?????????*/
/**????????????**/
int count=1,x1=0;//?????create???print??
struct Node; //????
typedef struct Node *PNode;
struct Node{
    int num;
    PNode llink;
    PNode rlink;
};
typedef struct Node *Linklist;
Linklist createNullList_link(void) //?????
{
    PNode p=(PNode)malloc(sizeof(struct Node));
    if(p!=NULL) p->rlink=p->llink=NULL;
    else printf("out of space!\n");
    return (p);
}
Linklist create() //????????
{
    //printf("????%d????\n",count);
    char c; //???????
    int X=0;
    Linklist p;
    p=createNullList_link();
    p->rlink=NULL;
    while((c=getchar())!='\n') //???????????????????
    {
        PNode q=(PNode)malloc(sizeof(struct Node));
        if(q!=NULL)
        {
            if(c=='-') {X=1;continue;}
            if(X==1) q->num=-1*(c-'0'); //???????????
            else q->num=c-'0';
            q->rlink=p;
            q->llink=NULL;
            p->llink=q;
            p=q;
        }
        else
        printf("out of space!\n");
    }
    count++; //???????????
    return (p);
}
void print(Linklist llist) //???????
{
    int x0=0;
    while(llist->rlink!=NULL)
    {
        if(llist->num>0&&llist->rlink->num<0)  //????????
        {
            llist->num--;
            llist->rlink->num+=10;
        }
        if(llist->num==0&&llist->rlink->num<0)
        {
            printf("-");
        }
        if(x0==0&&llist->rlink->rlink!=NULL&&llist->num==0&&x1==0) //?????????????0
        {
            llist=llist->rlink;
            continue;
        }
        printf("%d",abs(llist->num));
        llist=llist->rlink;
        x0++;
    }
}
Linklist add(Linklist p1,Linklist p2,Linklist q) //????
{
    int Jw=0;//????
    int out=0;//?????????
    while((p1->rlink!=NULL)||(p2->rlink!=NULL))
    {
        if((p1->rlink!=NULL)&&(p2->rlink!=NULL))
        {
            out=p1->num+p2->num+Jw;
            p1=p1->rlink;
            p2=p2->rlink;
        }
        else if((p1->rlink==NULL)&&(p2->rlink!=NULL))//??1???????????2????1?
        {
            out=0+p2->num+Jw;
            p2=p2->rlink;
        }
        else//??2???????????1????2?
        {
            out=p1->num+0+Jw;
            p1=p1->rlink;
        }

        Jw=0;
        PNode p=(PNode)malloc(sizeof(struct Node));
        if(p==NULL) printf("out of space!\n");
        if(out>0||out==0)
        p->num=(out%10);
        else
        {
            p->num=-1*((-1*out)%10);
        }
        p->rlink=q;
        p->llink=NULL;
        q->llink=p;
        q=p;
        if(out>0||out==0)
        Jw=out/10;
        else if(out<(-1*9))
        Jw=-1;
    }
 //   printf("???????\n");
    if(Jw==1) {printf("1");x1=1;} //??????????1????????????
    if(Jw==-1&&out!=0) {printf("-1");x1=1;} //????????????1???
    else if(out<0) printf("-"); //??
    return q;
}
void destroy1List_link(Linklist llist)  //??????
{
    PNode p;
    while(llist!=NULL)
    {
        p=llist;
        llist=llist->rlink;
        free(p);
    }
}
void destroy2List_link(Linklist llist)  //??????
{
    PNode p;
    while(llist!=NULL)
    {
        p=llist;
        llist=llist->llink;
        free(p);
    }
}
int main()
{
   // printf("?????????????????\n");
    Linklist l1,l2,l3;
    l1=create(); //????????
    l2=create(); //????????
    l3=(PNode)malloc(sizeof(struct Node)); //??????
    if(l3==NULL)
    printf("out of space!\n");
    l3->rlink=l3->llink=NULL;
    l3=add(l1,l2,l3);//???????????????l3
    print(l3);//??????
    destroy2List_link(l3);
    destroy1List_link(l1);
    destroy1List_link(l2);
   //printf("\n?????\n");
    return 0;
}
