

int main(int argc, char* argv[])
{
	char sz[101],*p,first;
	p=sz;
	gets(p);
	first=*p;
	for(;*(p+1)!='\0';p++){
		*p=*p+*(p+1);
	}
	*p+=first;
	*(p+1)='\0';
	printf("%s",sz);
	return 0;
}
