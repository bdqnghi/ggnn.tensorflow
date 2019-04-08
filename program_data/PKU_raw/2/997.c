int a[26]={0} ;int n;int max;int hao;
struct chushu
{
    int num;
    char s[30];
    struct chushu *next;   
};
struct chushu *create()
{
    int j=0,q,i=0,k=0;
  
    struct chushu *head,*p1,*p2;
    p1=(struct chushu *)malloc(len);
    scanf("%d %s",&p1->num,p1->s);
  
    for (i=0;p1->s[i]!='\0';i++)
    {
        j=p1->s[i]-65;
        a[j]=a[j]+1;
    }
    
    
    head=p1;p2=p1;
    while(k<n-1)
    {
    	k++;
        p2=p1;
        p1=(struct chushu *)malloc(len);
        scanf("%d %s",&p1->num,p1->s);
    
        for (i=0;p1->s[i]!='\0';i++)
        {
            j=p1->s[i]-65;
            a[j]=a[j]+1;
        } 
        
        p2->next=p1;
        
    }
    p2=p1;
    p2->next=NULL;
    return (head);
}

/*void print(struct chushu *head)
{
    struct chushu *p;
    p=head;
	while(p!=NULL)
	{printf("%d\n",p->num);
	p=p->next;}
}*/


void search(struct chushu *head)
{
    int i;
    struct chushu *p;
    p=head;
    while (p->next!=NULL)
    {
    	for (i=0;p->s[i]!='\0';i++)
    	{
    	    if (hao+65==p->s[i])
    	    printf("%d\n",p->num);
    	}
    	p=p->next;
    }
    for (i=0;p->s[i]!='\0';i++)
    	{
    	    if (hao+65==p->s[i])
    	    printf("%d\n",p->num);
    	}
}


void main()
{
    int i;
    struct chushu *p;
    
    scanf("%d",&n);
    p=create();
    max=0;
    //print(p);

  for (i=0;i<26;i++)
    {
    	if (a[i]>max)
    	{
    	    max=a[i];
    	    hao=i;   
    	}
    }  
    printf("%c\n",hao+65);
    printf("%d\n",max);
    search(p);
} 
