
char b,g,chr[100];
struct
	{
		int num,t;
		char s;
	}ch[100];

void chulie(int a)
{
	int k,m,n;
	if ((ch[a].s==g) && ch[a].t!=0 )	
	{
		for (k=a-1;k>=0;k--)
		{
			if (ch[k].s==b && ch[k].t!=0)
			{
				printf("%d %d\n",ch[k].num,ch[a].num);
				ch[k].t=0;
				ch[a].t=0;
				break;
			}
		}
	}
	if (chr[a+1]!='\0')
		chulie(++a);
}
int main()
{
	
	int nb,ng,i,j,k,l,m;
	scanf("%s",chr);
	b=chr[0];
	for (i=0;chr[i]!='\0';i++)
	{
		ch[i].num=i;
	    ch[i].t=1;
		ch[i].s=chr[i];
	}
	for (i=0;chr[i]!='\0';i++)
	{
		if (chr[i]!=b)
		{
			g=chr[i];
			break;
		}
	}
	chulie(i);
	return 0;
}
