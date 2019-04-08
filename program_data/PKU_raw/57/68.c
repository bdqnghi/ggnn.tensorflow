
int main(int argc, char* argv[])
{
	int n,i,j,k;
	char *p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	p=(char*)malloc(1000*sizeof(char));
	gets(p);
	k=strlen(p);
	if((*(p+k-2)=='e'&&*(p+k-1)=='r')||(*(p+k-2)=='l'&&*(p+k-1)=='y'))
	{
		*(p+k-2)='\0';
	}
	else if(*(p+k-3)=='i'&&*(p+k-2)=='n'&&*(p+k-1)=='g')
		*(p+k-3)='\0';
	printf("%s\n",p);
	}
}
