int main()
{
	int i,length;
	char sz1[101],sz2[101],*character,*family;
	character=sz1;
	gets(character);
	family=sz2;
	for(i=0;*(character+i+1)!='\0';i++)
	{
		*family=*(character+i)+*(character+i+1);
		family++;
	}
	*family++=*character+*(character+i);
	*family='\0';
	family=sz2;
	if(*family!='\0')
		printf("%s",family);
	return 0;
}
