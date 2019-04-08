
void main()
{
	char c;
	int num=0;

	c=getchar();

	while(c!='\n'){
		if(c>='0'&&c<='9'){
			num=1;
			printf("%c",c);
		}
		else{
			if(num==1){
				putchar('\n');
				num=0;
			}
		}
		c=getchar();
	}
}