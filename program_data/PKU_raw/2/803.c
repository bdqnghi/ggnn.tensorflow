
struct book{
	int num;
	char writer[27];
};

void main()
{
	struct book *p,*head;
	int n,i,j,max,maxi;
	int l[26]={0},lnum[999];
	void count(int *l,struct book *p,int lnum);
	int read(struct book *p);

	scanf("%d",&n);
	head=p=(struct book *)calloc(n,sizeof(struct book));
	for(i=0;i<n;i++,p++)
	{
		lnum[i]=read(p);
	}
	p=head;
	for(i=0;i<n;i++)
	{
		count(l,p,lnum[i]);
		p++;
	}
	max=l[0];  maxi=0;
	for(i=1;i<26;i++)
	{
		if(max<l[i])
		{
			max=l[i];
			maxi=i;
		}
	}
	printf("%c\n",65+maxi);
	printf("%d\n",max);
	p=head;
	for(i=0;i<n;i++)
	{
		for(j=0;j<lnum[i];j++)
		{
			if(p->writer[j]==65+maxi)
			{
				printf("%d\n",p->num);
				break;
			}
		}
		p++;
	}
}
int read(struct book *p)
{
	int i=0;
	char d;
	scanf("%d",&p->num);
	d=getchar();
	d=getchar();
	do{
		p->writer[i]=d;
		i++;
	}while((d=getchar())!='\n');
	return(i);
}
void count(int *l,struct book *p,int lnum)
{
	int i;
	for(i=0;i<lnum;i++)
	{
		switch(p->writer[i])
		{
		case'A':l[0]++; break;     case'B':l[1]++; break;
		case'C':l[2]++; break;     case'D':l[3]++; break;
		case'E':l[4]++; break;     case'F':l[5]++; break;
		case'G':l[6]++; break;     case'H':l[7]++; break;
	    case'I':l[8]++; break;     case'J':l[9]++; break;
		case'K':l[10]++; break;     case'L':l[11]++; break;
		case'M':l[12]++; break;     case'N':l[13]++; break;
		case'O':l[14]++; break;     case'P':l[15]++; break;
		case'Q':l[16]++; break;     case'R':l[17]++; break;
		case'S':l[18]++; break;     case'T':l[19]++; break;
		case'U':l[20]++; break;     case'V':l[21]++; break;
		case'W':l[22]++; break;     case'X':l[23]++; break;
		case'Y':l[24]++; break;     case'Z':l[25]++; break;
		}
	}
}