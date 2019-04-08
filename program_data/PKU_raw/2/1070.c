
struct node  //??????
{
	int num;
	char name[26];
	struct node *next;
};
int n=1,m;
struct zuozhe
{
	char name;
	int books[300];
	int num;
}zuozhe[26];

struct node  *getlinked()  
{
	struct node *head,*newnode,*thisnode;
//	printf("Please input the number and data (-1 -1 to end):\n");
	do
	{	
		newnode=(struct node *)malloc(sizeof(struct node)); //??????????
		if(newnode==NULL) //malloc???
		{
			printf("malloc failed");
			exit(-1);
		}
		scanf("%d%s",&newnode->num,&newnode->name);
		newnode->next=NULL;
		if(n==1)  //???????????thisnode?head????newnode
		{
			thisnode=newnode;
			head=newnode;
		}
		else //?????????????
		{
			thisnode->next=newnode; 
		}
		if(n<=m)
		{
			thisnode=newnode; //????
			n++; //????
		}
	}while(n<=m);
	return head;
}
void tongji(struct node *p,int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<strlen(p->name);j++)
		{
			zuozhe[(p->name)[j]-'A'].books[zuozhe[(p->name)[j]-'A'].num]=p->num;
			zuozhe[(p->name)[j]-'A'].num++;
		}
		p=p->next;
	}
}

void bubble(struct zuozhe array[],int n)
{
	int i=0,pass;
	struct zuozhe temp;

	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(array[i].num<array[i+1].num)
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
	}
	return;
}

void main()
{
	struct node *p;
	int i;
	scanf("%d",&m);
	p=getlinked();
	for(i=0;i<26;i++)
	{
		zuozhe[i].name='A'+i;
		zuozhe[i].num=0;
	}
	tongji(p,m);
	bubble(zuozhe,26);
	printf("%c\n%d\n",zuozhe[0].name,zuozhe[0].num);
	for(i=0;i<zuozhe[0].num;i++)
	{
		printf("%d\n",zuozhe[0].books[i]);
	}
}