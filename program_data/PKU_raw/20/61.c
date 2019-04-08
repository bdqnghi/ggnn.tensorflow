int ascmax(char str[10])
{
	int sit=0,i;
	char max;
	max=str[0];
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>max)
		{
			max=str[i];
			sit=i+1;
		}
	}
	return(sit);
}
void insert(int sit,char *pa,char *pb,char *pc)
{
	int i=0;
	while(i<sit)
	{
		*pc=*pa;
		pc++;
		pa++;
		i++;
	}
	while(i>=sit&&(i<sit+3))
	{
		*pc=*pb;
		pc++;
		pb++;
		i++;
	}
	while((i>=sit+3)&& (*pa !='\0'))
	{
		*pc=*pa;
		pc++;
		pa++;
		i++;
	}
	*pc='\0';
	
}
void main()
{
	int sit;
	char a[11],b[4],c[15];
    while(scanf("%s",a)!=EOF)
	{
		scanf("%s",b);
	
		sit=ascmax(a);
		insert(sit,a,b,c);
		puts(c);
		
	}
	
	
}