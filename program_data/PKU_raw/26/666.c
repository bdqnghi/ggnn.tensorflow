

int main()
{
	char tmp[102]={0},*p=tmp+1,prev;
	gets(tmp+1);
	prev=tmp[0];
	do{
		if(prev!=' '||prev!=*p)
			putchar(*p);
		prev=*p++;
	}while(*p);
	putchar('\n');
		
	
	return 0;
}