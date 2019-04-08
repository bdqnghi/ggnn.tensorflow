void friend1(char p[],int n);
int main()
{
	char letter[100];
	int i,j,k;
	gets(letter);
	friend1(letter,strlen(letter));
	puts(letter);
}
void friend1(char p[],int n)
{
	char c;
	int j;
	c=*p;
	for(j=0;j<=n-2;j++)
	{
		*(p+j)=*(p+j)+*(p+j+1);
	}
	*(p+n-1)=*(p+n-1)+c;

}
