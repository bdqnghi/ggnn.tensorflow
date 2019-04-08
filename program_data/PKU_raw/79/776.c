void main()
{
	int n[100],m[100];
	int i,j,y,x;
	
    struct monkey
	{
		int num;
		struct monkey *next;
	};
	struct monkey mon[300];
	struct monkey *head,*p;
	int k=-1;
		do
		{   k++;
          scanf("%d %d",&n[k],&m[k]);
		  
		}
		while(n[k]!=0);
		for(i=0;i<k;i++)
		{
			for(j=0;j<n[i];j++)
			{
			mon[j].num=j+1;
			mon[j].next=&mon[j+1];
			}
			mon[n[i]-1].next=&mon[0];
			head=&mon[n[i]-1];
			 while((head->next)!=head)
			{
				x=1;
				while(x<m[i])
				{

					head=head->next;
					x++;
				}
				
				head->next=(head->next)->next;
			}
	      printf("%d\n",head->num);
		}
}

