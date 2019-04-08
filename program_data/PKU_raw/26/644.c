void main()
{
	int b=0,i;
	char c[100000];
	
	while(1){
		gets(c);
	for(i=0;i<100000;i++)
	{
		if(!c[i]) goto end;
		if(c[i]!=' '||b==0) putchar(c[i]);
		if(c[i]==' ') b=1;
		else b=0;
	}
	}
end:;
	printf("\n");
}