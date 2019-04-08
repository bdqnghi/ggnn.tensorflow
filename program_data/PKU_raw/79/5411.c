/*****************************************************************/
/* ????????                                              */
/*    ???c[i][j]??????????????????????  */
/* c[i][j]=(c[i-1][j]+j) mod i???i??????j??????? */
/* ?????????                                            */
/*    ??i?1?N???????O(n)                              */
/* ??????c[N][M]                                           */
/* ?? 2010-11-29                                               */
/*****************************************************************/


//????????

//?????????
typedef struct inputandoutput{
	int n;
	int m;
	int king;
	struct inputandoutput  * next;
}LinkIO;

//??????????
typedef struct{
	LinkIO * head;
	LinkIO * tail;
	int    total;
}LinkIOHead;

//n—????m—??
int n,m;

//????????
int CheckInput(int num,int total){
	if (num<0)
	{
		return ISNOT_POSITIVEINT;
	} 
	else if (num>total)
	{
		return ISMORETHAN_THREEHUNDRED;
	} 
	else
	{
		return ISCORRECT;
	}	
}

//???????
int GetUserInput(int * n,int * m){
	int checkresult=0;
	scanf("%d %d",n,m);
    checkresult=CheckInput(*n,300);
	if (checkresult==ISNOT_POSITIVEINT)
	{
	
		printf("error!\n");
	} 
	else if (checkresult==ISMORETHAN_THREEHUNDRED)
	{
		
		printf("error!\n");
	} 
	else
	{
		checkresult=CheckInput(*m,300);
		if (checkresult==ISNOT_POSITIVEINT)
		{
			printf("error!\n");
		} 
		else if (checkresult==ISMORETHAN_THREEHUNDRED)
		{
			
			printf("error!\n");
		} 
		else
		{
			if (*n==0 && *m==0)
			{
			
			} 
			else if (*n==0 || *m==0)
			{
				printf("error!\n");
			}
			else{
				return 1;
			}	
		}
	}
	return 0;
}

//??????n?m?????
void InsertIntoLinkIO( LinkIOHead * iohead ,int n,int m) 
{
	LinkIO *p;
	p=(LinkIO *) malloc(sizeof(LinkIO));
	if (p==NULL)
	{
		printf("error!");
		printf("error,n=%d,m=%d!\n",n,m);
		return;
	}
	p->n=n;
	p->m=m;
	p->king=0;
	p->next =NULL;
	if (iohead->head==NULL && iohead->tail==NULL)
	{
		iohead->head=p;
		iohead->tail=p;
		iohead->total=1;
	} 
	else
	{
		iohead->tail->next=p;
		iohead->tail=p;
		iohead->total=iohead->total+1;
	}
}

//????
int GetKing( int kn, int km ) 
{
	int king=0,i=0,j=0;
	int kresult=0;
	for (i=2;i<=kn;i++)
	{
		kresult=(kresult+km) % i;
	}
	return kresult+1;
}

//???
int main(){
	int inputresult=0;
	int king=0;
	LinkIOHead *iohead;
	LinkIO *p;
	
	iohead=(LinkIOHead *)malloc(sizeof(LinkIOHead));
	if (iohead==NULL)
	{
		printf("error!");
		return 0;
	}
	iohead->head=NULL;
	iohead->tail=NULL;
	iohead->total=0;

	inputresult=GetUserInput(&n,&m);
	while (inputresult==1)
	{
		InsertIntoLinkIO(iohead,n,m);
		inputresult=GetUserInput(&n,&m);
	}
	
	p=iohead->head;
	while (p!=NULL)
	{		  
		king=GetKing(p->n,p->m);
		p->king=king;
		p=p->next;
	}
	
	p=iohead->head;
	while (p!=NULL)
	{
		printf("%d\n",p->king);
		p=p->next;
	}
	
	if (iohead!=NULL)
	{
		free(iohead);
	}
	if (p!=NULL)
	{
		free(p);
	}

	return 0;
}