struct Node
	{
       int number;
	   struct Node * next;
	};
void main()
{
	
	struct Node *linkhead,*a,*linktail;
	int n,m,i,j,count=0;
	int king[100];
	while(1)
	{
	scanf("%d%d",&n,&m);
	if((n==0)&&(m==0))
	    break;
	for(i=1;i<=n;i++)
	{
        if(i==1)
		{a=(struct Node *)malloc(1*sizeof(struct Node));
		 a->number=i;
		 linkhead=a;
		 linktail=a;
		}
		else
		{
			a=(struct Node *)malloc(1*sizeof(struct Node));
            a->number=i;
			linktail->next=a;
			linktail=a;
		}
	}
	linktail->next=linkhead;
	linkhead=linktail;
	for(i=1;i<=(n-1);i++)
	{
	for(j=0;j<(m-1);j++)
	{
		linkhead=linkhead->next;
	}
    a=linkhead->next;
	linkhead->next=a->next;
	free(a);
	}
	king[count]=linkhead->number;
	count++;
	free(linkhead);
}
	for(i=0;i<count;i++)
	{
		printf("%d\n",king[i]);
	}
}
	








	