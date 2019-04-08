int n;
struct student
{
	int num;
	char name[100];
	struct student *next;
};
struct student *creat(void)
{
	struct student *head;
	struct student *p1,*p2;
	int i;
	p1=(struct student*)malloc(LEN);
	scanf("%d",&p1->num);
	scanf("%s",p1->name);
	p1->next=NULL;
	head=p1;
	p2=p1;
	for(i=1;i<n;i++)
	{
		p1=(struct student*)malloc(LEN);
		scanf("%d",&p1->num);
		scanf("%s",p1->name);
		p1->next=NULL;
		p2->next=p1;
		p2=p1;
	}
	return (head);

}

void main()
{
	struct student *head;
	struct student *p1;
	char *p2;
	int i;
	int a[26];
	for(i=0;i<26;i++)
	{
		a[i]=0;
	}
	scanf("%d",&n);
	head=creat();
	p1=head;
	do
	{
		p2=p1->name;
		for(;(*p2)!='\0';p2++)
		{
			if((*p2)=='A')
			{
				a[0]=a[0]+1;
			}
			if((*p2)=='B')
			{
				a[1]=a[1]+1;
			}
			if((*p2)=='C')
			{
				a[2]=a[2]+1;
			}if((*p2)=='D')
			{
				a[3]=a[3]+1;
			}if((*p2)=='E')
			{
				a[4]=a[4]+1;
			}if((*p2)=='F')
			{
				a[5]=a[5]+1;
			}if((*p2)=='G')
			{
				a[6]=a[6]+1;
			}if((*p2)=='H')
			{
				a[7]=a[7]+1;
			}if((*p2)=='I')
			{
				a[8]=a[8]+1;
			}if((*p2)=='J')
			{
				a[9]=a[9]+1;
			}if((*p2)=='K')
			{
				a[10]=a[10]+1;
			}if((*p2)=='L')
			{
				a[11]=a[11]+1;
			}if((*p2)=='M')
			{
				a[12]=a[12]+1;
			}if((*p2)=='N')
			{
				a[13]=a[13]+1;
			}if((*p2)=='O')
			{
				a[14]=a[14]+1;
			}if((*p2)=='P')
			{
				a[15]=a[15]+1;
			}if((*p2)=='Q')
			{
				a[16]=a[16]+1;
			}if((*p2)=='R')
			{
				a[17]=a[17]+1;
			}if((*p2)=='S')
			{
				a[18]=a[18]+1;
			}if((*p2)=='T')
			{
				a[19]=a[19]+1;
			}if((*p2)=='U')
			{
				a[20]=a[20]+1;
			}if((*p2)=='V')
			{
				a[21]=a[21]+1;
			}if((*p2)=='W')
			{
				a[22]=a[22]+1;
			}if((*p2)=='X')
			{
				a[23]=a[23]+1;
			}if((*p2)=='Y')
			{
				a[24]=a[24]+1;
			}if((*p2)=='Z')
			{
				a[25]=a[25]+1;
			}
			
		}
		p1=p1->next;
	}while(p1!=NULL);
		int j,max=0;
		for(i=0;i<26;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				j=i;
			}
		}
	printf("%c\n",j+65);
	printf("%d\n",a[j]);
	p1=head;
	do
	{
		p2=p1->name;
		for(;(*p2)!='\0';p2++)
		{
			if((*p2)==j+65)
			{
				printf("%d\n",p1->num);
			}
		}
		p1=p1->next;
	}while(p1!=NULL);

}
	
	 
