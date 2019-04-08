

struct author
{
	int number;
	char name[26];
}
author[999];

struct single
{
	
	char letter[1];
	int number;

}
single[26];



int main(int argc, char* argv[])
{
	int n, i, m, j, p, k, book[999];
	for(i=0;i<26;i++)
	{
		single[i].letter[0]=65+i;
		single[i].number=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %s",&author[i].number,&author[i].name);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			for(k=0;k<26;k++)
			{
				if(single[k].letter[0]==author[i].name[j])
					single[k].number++;
			}
		}
	}
	m=0;
	p=single[0].number;
	for(i=1;i<26;i++)
	{
		if(p<single[i].number)
		{
			p=single[i].number;
			m=i;
		}
	}
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<26;j++)
		{
			if(author[i].name[j]==single[m].letter[0])
			{
				book[k]=author[i].number;
				k++;
			}
		}
	}
	printf("%c\n",single[m].letter[0]);
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%d\n",book[i]);
	}
	return 0;
}
