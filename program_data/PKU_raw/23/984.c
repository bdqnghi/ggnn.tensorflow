char a[100];
int i,j,lenth;
char *flag1,*flag2;
char *start=a;
char *move;


void print()
{
	char *p;
	if(move!=start)
	{
		for(p=flag1+1;p<flag2;p++)
			printf("%c",*p);
		printf(" ");
	}

	else
	{for(p=flag1;p<flag2;p++)
	printf("%c",*p);}
}

void main()
{
	gets(a);

	lenth=strlen(a);
	move=a+lenth-1;

	for(flag1=move+1;move>=start;move--)
	{
		if(*move==' '||move==start)
		{
			flag2=flag1;
			flag1=move;
			print();
		}

			
	}

}