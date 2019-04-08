
struct inf
{
	int num;
	char wri[27];
	struct inf *next;
};

void main()
{
	int n,i,time[26]={0};
	//for(i=0;i<26;i++)
//	printf("%d",time[i]);
	char *pn;
	struct inf *head,*p1,*p0,*p;
	scanf("%d",&n);
	p1 = head = (struct inf*)malloc(sizeof(struct inf));
	for (i=0;i<n;i++)
	{
	    p0 = (struct inf*)malloc(sizeof(struct inf));
		scanf("%d%s",&p0->num,p0->wri);
		p0->next = NULL;
		p1->next=p0;
		p1=p0;
		pn=p0->wri;
		while(*pn!='\0')
		{
			time[*pn-65]++;
		    pn=pn+1;
		}
	}

	int max=0,k;
	for (i=0;i<26;i++)
	{
		if (time[i]>max)
		{
			max=time[i];
			k=i;
		}
	}
	printf("%c\n%d\n",k+65,max);
	p=head;
	while(p!=NULL)
	{
		
		pn=p->wri;
		while(*pn!='\0')
		{
			if (*pn==k+65)
			{
				printf("%d\n",p->num);
				break;
			}
			pn=pn+1;
		}	
		p=p->next;
	}
	

//	printf("%d",p->num);


}