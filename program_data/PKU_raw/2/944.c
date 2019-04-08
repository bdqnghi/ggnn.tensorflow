

struct book
{
	int id;
	char author[27];
	struct book *next;
};

struct book *creat()
{
	int n , i;
	scanf("%d",&n);
	struct book *p1,*head,*p0;
	head = NULL;
	p1 = head;
	for ( i = 0 ; i < n ; i ++)
	{
		p0 = (struct book *)malloc(sizeof(struct book));
		scanf("%d %s" , &p0->id , p0->author );
		if( head == NULL )
		{
			p1 = p0;
			head = p1;
			p0->next = NULL;
		}
		else
		{
			p1->next = p0;
			p0->next = NULL;
			p1 = p0;
		}
	}
	return (head);
}
char best(struct book *head)
{
	int i , max , a[26]  ;
	struct book *p;
	p = head;
	for (i = 0;i < 26;++i) a[i] = 0;
	while(p != NULL)
	{
		i = 0;
		while( p->author[i] != '\0')
		{
			a[p->author[i]-'A']++;
			i ++;
		}
		p = p->next;
	}
	for(i = 0 ; i < 26 ; i ++ )
	{
		if ( i == 0 ) max = i;
		else if ( a[i] > a[max]) max = i;
	}
	return ('A'+max);
}
void print(char x , struct book *head )
{
	int i,k = 0;
	char a = x;
	struct book *p = head;
	while(p != NULL)
	{
		i = 0 ;
		while ( p->author[i] != '\0' )
		{
			if(p->author[i] == a)
			{
				k ++;
				break;
			}
			i ++;
		}
		p = p->next;
	}
	printf("%c\n%d\n" , a , k);
	p = head;
	while(p != NULL)
	{
		i = 0;
		while ( p->author[i] != '\0' )
		{
			if(p->author[i] == a)
			{
				printf("%d\n",p->id);
				break;
			}
			i ++;
		}
		p = p->next;
	}
}

int main(int argc, char* argv[])
{
	char writer;
	struct book *head;
	head = creat();
	writer = best(head);
	print(writer,head);
	return 0;
}
