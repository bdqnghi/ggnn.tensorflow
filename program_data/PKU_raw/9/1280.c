struct people
{
	int order;
	char ID[10];
    int age;
}per[100];
struct old
{
	int orders;
	char IDs[10];
	int ages;
}elder[100];
int main()
{
	int n,i,j,t,m,q,r;
	char p[10];
	int b[100],c[100];
    scanf("%d",&n);
	for(i=0;i<=(n-1);i++)
	{
		per[i].order=i;
		scanf("%s %d",per[i].ID,&per[i].age);
		b[i]=strlen(per[i].ID);
	}
	t=0;
	for(i=0;i<=(n-1);i++)
	{
        if(per[i].age>=60)
		{
			elder[t].orders=t;
			strcpy(elder[t].IDs,per[i].ID);
			elder[t].ages=per[i].age;
			t=t+1;
			per[i].age=(-1);
		}
	}
    for(i=0;i<=(t-1);i++)
	{
		for(j=0;j<=(t-i-1);j++)
		{
			if(elder[j].ages<elder[j+1].ages)
			{
				m=elder[j].ages;
				strcpy(p,elder[j].IDs);
				q=elder[j].orders;
				strcpy(elder[j].IDs,elder[j+1].IDs);
				elder[j].ages=elder[j+1].ages;
				elder[j].orders=elder[j+1].orders;
				elder[j+1].ages=m;
				strcpy(elder[j+1].IDs,p);
				elder[j+1].orders=q;
			}
		}
	}
	for(i=0;i<=(t-1);i++)
	{
       for(j=0;j<=(t-1-j);j++)
	   {
		   if(elder[j].ages==elder[j+1].ages)
		   {
			   if(elder[j].orders>elder[j+1].orders)
			   {
				    m=elder[j].ages;
			    	strcpy(p,elder[j].IDs);
			    	q=elder[j].orders;
			    	strcpy(elder[j].IDs,elder[j+1].IDs);
			    	elder[j].ages=elder[j+1].ages;
			    	elder[j].orders=elder[j+1].orders;
			    	elder[j+1].ages=m;
			     	strcpy(elder[j+1].IDs,p);
			    	elder[j+1].orders=q;
			   }
		   }
	   }
	}
    for(i=0;i<=(t-1);i++)
	{
         printf("%s\n",elder[i].IDs);
	}
	for(i=0;i<=(n-1);i++)
	{
		if(per[i].age!=(-1))
		{
			printf("%s\n",per[i].ID);
		}
	}
	return 0;  
}
