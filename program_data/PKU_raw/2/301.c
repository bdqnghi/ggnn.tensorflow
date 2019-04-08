struct info
{
	short int num;
	char author[27];
};

int main()
{
	char findoutmax(struct info a[],int n,int *pt);
	void detect(struct info b[],char writter,int nn);
	char figure;
	int i,n_book,max,*p;
	struct info book[999];
	scanf("%d",&n_book);
	for (i=0;i<n_book;i++)
	{
		scanf("%d %s",&book[i].num , &book[i].author);
	}
	p=&max;
	figure=findoutmax(book,n_book,p);
	printf("%c\n%d\n",figure,max);
	detect(book,figure,n_book);
	return 0;
}

char findoutmax(struct info a[],int n,int *pt)
{
	int i,j,sum[26]={0};
	for (i=0;i<n;i++)
	{
		for (j=0;a[i].author[j]!='\0';j++)
		{
			switch (a[i].author[j])
			{
			case 'A': sum[0]=sum[0]+1; break;
			case 'B': sum[1]=sum[1]+1; break;
			case 'C': sum[2]=sum[2]+1; break;
			case 'D': sum[3]=sum[3]+1; break;
			case 'E': sum[4]=sum[4]+1; break;
			case 'F': sum[5]=sum[5]+1; break;
			case 'G': sum[6]=sum[6]+1; break;
			case 'H': sum[7]=sum[7]+1; break;
			case 'I': sum[8]=sum[8]+1; break;
			case 'J': sum[9]=sum[9]+1; break;
			case 'K': sum[10]=sum[10]+1; break;
			case 'L': sum[11]=sum[11]+1; break;
			case 'M': sum[12]=sum[12]+1; break;
			case 'N': sum[13]=sum[13]+1; break;
			case 'O': sum[14]=sum[14]+1; break;
			case 'P': sum[15]=sum[15]+1; break;
			case 'Q': sum[16]=sum[16]+1; break;
			case 'R': sum[17]=sum[17]+1; break;
			case 'S': sum[18]=sum[18]+1; break;
			case 'T': sum[19]=sum[19]+1; break;
			case 'U': sum[20]=sum[20]+1; break;
			case 'V': sum[21]=sum[21]+1; break;
			case 'W': sum[22]=sum[22]+1; break;
			case 'X': sum[23]=sum[23]+1; break;
			case 'Y': sum[24]=sum[24]+1; break;
			case 'Z': sum[25]=sum[25]+1; break;
			}
		}
	}
	j=0;
	for (i=1;i<26;i++)
	{
		if (sum[j]<sum[i]) j=i;
	}
	*pt=sum[j];
	return (65+j);
}

void detect(struct info b[],char writter,int nn)
{
	int i,j;
	for (i=0;i<nn;i++)
	{
		for (j=0;b[i].author[j]!='\0';j++)
		{
			if (b[i].author[j]==writter)
			{
				printf("%d\n",b[i].num);
			}
		}
	}
}
