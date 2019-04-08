
int main()
{
	char c[30],*a;
	int i,d;
	gets(c);
	d=strlen(c);
	for(a=c+0;a<=c+d-1;a++)
		{
			if(isdigit(*a))
			printf("%c",*a);
			else if(!isdigit(*a)&&a>(c+0)&&isdigit(*(a-1)))
				printf("\n");
	}
	return 0;
}