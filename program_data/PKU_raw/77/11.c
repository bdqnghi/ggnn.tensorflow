
struct student{
	int boy;
	int girl;
};
struct student out[PI];
struct student tmp;
int len,k=0;
char s[PI];
char b,g;

void output()
{
	int i,j;
	for (i=0;i<k;i++)
	{
		for (j=i+1;j<k;j++)
		{
			if (out[i].girl>out[j].girl)
			{
				tmp.boy=out[i].boy;
				tmp.girl=out[i].girl;
				out[i].boy=out[j].boy;
				out[i].girl=out[j].girl;
				out[j].boy=tmp.boy;
				out[j].girl=tmp.girl;
			}
		}
	}
	for (i=0;i<k;i++)
		printf("%d %d\n",out[i].boy,out[i].girl);
}


void outing(int x)
{
	int l,r;
	l=1;r=0;
	int i,j;
	j=0;
	for (i=0;i<len;i++)
	{
		if (s[i]!='0')
			j++;
	}
	if (j==0)
		output();
	else
	{
	for (i=x+1;i<len;i++)
	{
		if (s[i]==b)
		{
			l++;
		}
		if (s[i]==g)
		{
			r++;
			if (r==l)
			{
				s[x]='0';
				s[i]='0';
				out[k].boy=x;
				out[k].girl=i;
//				printf("%d %d\n",out[k].boy,out[k].girl);
				k++;
				break;				
			}
		}
	}
	outing(x+1);
	}
	
}

int main()
{
	scanf("%s",s);
	int i;
	len=strlen(s);
	b=s[0];
	for (i=0;i<len;i++)
	{
		if (s[i]!=b)
		{
			g=s[i];
			break;
		}
	}
	outing(0);
	return 0;
}