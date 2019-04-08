struct num
{
    int n;
    struct num* next;
    struct num* ahead;
};
struct num* phead1;       //????
struct num* phead2;       //????
struct num* phead3;       //????
struct num* p1;
struct num* p2;
void create(struct num** phead,int n)//???????????
{
    int i=0;
    p1=(struct num*)malloc(sizeof(struct num));
    p1->n=0;
    *phead=p2=p1;
    (*phead)->ahead=NULL;
    for(i=0;i<=n-2;i++)
    {
        p1=(struct num*)malloc(sizeof(struct num));
        p1->n=0;
        if(i==0)
        {
            (*phead)->next=p1;
            p1->ahead=(*phead);
        }
        else
        {
            p2->next=p1;
            p1->ahead=p2;
        }
        p2=p1;
    }
    p2->next=NULL;
}

int main()
{
    char num1[10000];
    char num2[10000];
    //printf("Please input the first integer\n");
    scanf("%s",num1);
    //printf("Please input the next integer\n");
    scanf("%s",num2);
    int i1=0;
    int i2=0;
    int max;
    while(num1[i1]!='\0')
    {
        i1++;
    }
    while(num2[i2]!='\0')
    {
        i2++;
    }
    if(i1>=i2)
    {
        max=i1;
    }
    else
    {
        max=i2;
    }                         //????????????????
    create(&phead1,max);      //?????????max?max?max+1???
    create(&phead2,max);
    create(&phead3,max+1);
    struct num* ptemp1=phead1;
    struct num* ptemp2=phead2;
    int i3;
    for(i3=i1-1;i3>=0;i3--)
    {
        ptemp1->n=num1[i3]-'0';
        ptemp1=ptemp1->next;
    }
    int i4;
    for(i4=i2-1;i4>=0;i4--)
    {
        ptemp2->n=num2[i4]-'0';
        ptemp2=ptemp2->next;
    }                         //????????????
    struct num* ptemp3=phead1;
    struct num* ptemp4=phead2;
    struct num* ptemp5=phead3;
    while(ptemp3!=NULL)
    {
        if(((ptemp3->n)+(ptemp4->n)+(ptemp5->n))>=10)
        {
             ptemp5->n=ptemp5->n+((ptemp3->n)+(ptemp4->n))-10;
             ptemp3=ptemp3->next;
             ptemp4=ptemp4->next;
             ptemp5=ptemp5->next;
             ptemp5->n=(ptemp5->n)+1;
        }
        else
        {
            ptemp5->n=ptemp5->n+(ptemp3->n)+(ptemp4->n);
            ptemp3=ptemp3->next;
            ptemp4=ptemp4->next;
            ptemp5=ptemp5->next;
         }
    }                       //???????????????????????
    struct num* ptemp7=phead3;
    while(ptemp7->next!=NULL)
    {
        ptemp7=ptemp7->next;
    }
    //printf("the answer is:\n");
    if(ptemp7->n==0)
    {
        ptemp7=ptemp7->ahead;
        if(ptemp7->ahead==NULL)
        {
            printf("0");
            return 0;
        }
        else
        {
            while(ptemp7->n==0)
            {
                ptemp7=ptemp7->ahead;
            }
            while(ptemp7!=NULL)
            {
                printf("%d",ptemp7->n);
                ptemp7=ptemp7->ahead;
            }
        }
    }
    else
    {
        while(ptemp7!=NULL)
        {
            printf("%d",ptemp7->n);
            ptemp7=ptemp7->ahead;
        }
    }
    struct num* release1=phead1;//???????free???
    struct num* release2=phead2;
    struct num* release3=phead3;
    while(phead1->next!=NULL)
    {
        release1=phead1->next;
        phead1->next=(phead1->next)->next;
        free(release1);
    }
    free(phead1);
    while(phead2->next!=NULL)
    {
        release2=phead2->next;
        phead2->next=(phead2->next)->next;
        free(release2);
    }
    free(phead2);
    while(phead3->next!=NULL)
    {
        release3=phead3->next;
        phead3->next=(phead3->next)->next;
        free(release3);
    }
    free(phead3);
    return 0;
}
