int hh(char stu1,char stu2)
{
	int a1,a2;
	int b;
	a1=stu1;a2=stu2;
    b=a1+a2;
	return(b);
}
int main()
{
	char s[1000]={'\0'};
	int b[1000]={0};
	int i;
	char *ps;
	int *pb;
	gets(s);
	i=0;
	ps=s;
	pb=b;
	while(*(ps+i+1)!='\0')
	{
		*(pb+i)=hh(*(ps+i),*(ps+i+1));
		i++;
	}
	*(pb+i)=hh(*ps,*(ps+i));
	for(i=0;*(pb+i)!=0;i++)
		printf("%c",*(pb+i));
	return 0;
	
}
