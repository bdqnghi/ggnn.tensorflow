int main(int argc, char* argv[])
{
	char c[1000]={'\0'},q[1000]={'\0'};
		gets(c);
	int i=0,n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(i<n-1)
		{
			*(q+i)=*(c+i)+*(c+i+1);
		}
		else *(q+i)=*(c+i)+*c;
	}
	printf("%s",q);
	return 0;
}