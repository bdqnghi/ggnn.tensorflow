
int judge;
char zfc[81];

void judge1(char *p);
void judge1(char *p)
{
	if(!((*p>64&&*p<91)||(*p>96&&*p<123)||*p==95))
	{judge=0;}
	return;
}

void judge2(char *p);
void judge2(char *p)
{
	int len;
	len=strlen(zfc);
	int i;
	for(i=0;i<len;i++)
	{
		if(!((*(p+i)>64&&*(p+i)<91)||(*(p+i)>96&&*(p+i)<123)||*(p+i)==95||(*(p+i)>47&&*(p+i)<58)))
		{
			judge=0;
			break;
		}
	}
	return;
}

int main()
{
	int num;
	scanf("%d",&num);

	int i;
	char (*p)[30];
	for(i=0;i<num;i++)
	{
		judge=1;
		if(i==0)
		{getchar();}
		gets(zfc);
		p=&zfc;
		judge1(*p);
		judge2(*p);
		if(judge==0)
		{
			printf("0\n");
		}
		if(judge==1)
		{
			printf("1\n");
		}	
	}
	return 0;
}