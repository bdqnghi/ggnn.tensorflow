
struct list
{
	int num;
	char author[26];
};

struct number 
{
	int a;
	int time;
};

int main()
{
	int i,j,m,k,length;
	struct list book[100];
	struct number name[26],most;
	scanf("%d",&m);

	for(i=0;i<m;i++)
	{
		scanf("%d %s",&book[i].num,book[i].author);
	}

	for(i=0;i<26;i++)
	{
		name[i].a=i;
		name[i].time=0;
	}

	for(i=0;i<m;i++)
	{
		length=strlen(book[i].author);
        for(j=0;j<length;j++)
		{
			k=(book[i].author[j]);
			name[k-65].time++;
		}
	}

	most=name[0];

	for(i=1;i<26;i++)
	{
		if(name[i].time>most.time){
			most=name[i];
		}
	}

	printf("%c\n%d\n",most.a+65,most.time);
    
	for(i=0;i<m;i++)
	{
		length=strlen(book[i].author);

		for(j=0;j<length;j++)
		{
			k=(book[i].author[j]);
			if(most.a+65==k){
				printf("%d\n",book[i].num);
			}
		}
	}
	return 0;
}





