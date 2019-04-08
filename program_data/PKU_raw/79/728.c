struct monkey
{
	int num;
	struct monkey *next;
};

int monkeyking(int n,int m,struct monkey *temp)
{
    int i;  
	while(temp->next!=temp)
	{
		if(m==1)
			return(n);
		for(i=0;i<m-2;i++)
		{
			temp=temp->next;
		}
		temp->next=(temp->next)->next;
		temp=temp->next;
	}
	return(temp->num);
}

void main()
{
	struct monkey *temp=NULL,*pt=NULL,*head=NULL;
	int i,m=1,n=1;
	while(m!=0&&n!=0)
	{
		scanf("%d %d",&n,&m);
		if(n==0&&m==0)
			break;
		for(i=0;i<n;i++)
		{
			pt=(struct monkey *)malloc(sizeof(struct monkey));
			if(i==0)
			{
				head=pt;
				temp=pt;
			}
			else
			{
				temp->next=pt;
				temp=pt;
			}
			pt->num=i+1;
		}
		pt->next=head;
		printf("%d\n",monkeyking(n,m,head));
	}
}