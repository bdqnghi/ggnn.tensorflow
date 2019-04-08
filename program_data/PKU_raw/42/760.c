

struct LinkNode
{
       int data;
       struct LinkNode *next;
};

int k;

struct LinkNode *createList()
{
       int n, m;
       struct LinkNode *head, *p1, *p2;
       head = (struct LinkNode*) malloc(N);
       head->next = NULL;
       p2 = head;
       scanf("%d", &n);
       while (n--)
       {
             scanf("%d", &m);
             p1 = (struct LinkNode*) malloc(N);
             p1->data = m;
             p1->next = NULL;
             p2->next = p1;
             p2 = p1;
       } 
       scanf("%d", &k); 
       return head;
}
int main()
{
    struct LinkNode *head, *p, *q, *pre;
    //freopen("7.in", "r", stdin);
    //freopen("7.out", "w", stdout); 
    head = createList();
    p = head->next;
    pre = head;
    while (p != NULL)
    {
          if (p->data == k)
          {
             pre->next = p->next;
             q = p;
             p = p->next;
             free(q);
          }
          else 
          {
               pre = p;
               p = p->next;
          }
    }
    
    p = head->next;
    while (p != NULL)
    {
          q = p;
          p = p->next;
          printf("%d%s", q->data, p ? " " : "");
          free(q);
    }
    
    return 0;
}
