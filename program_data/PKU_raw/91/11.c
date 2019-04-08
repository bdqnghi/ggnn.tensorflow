
int main()
{
	char string[101];
	char *p1;
	p1=string;

	gets(string);

	char mid[101];
	char *p2;
	p2=mid;
	strcpy(mid,string);

	int i;
	int time=-1;
	for(i=0;*(p1+i)!='\0';i++)
	{
		*(p1+i)=*(p2+i)+*(p2+i+1);
		time++;
	}
	*(p1+time)=*(p2+time)+*(p2+0);

	printf("%s\n",p1);

	return 0;
}