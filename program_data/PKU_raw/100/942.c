
int main()
{
	int i,ch[26],t=0;
    char inp,c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(i=0;i<26;i++)
		ch[i]=0;
	inp=getchar();
	do{
	    for(i=0;i<26;i++)
		{
    		if(inp==c[i])
    			ch[i]++;
		}
	inp=getchar();
	}while(inp!='\n');

	for(i=0;i<26;i++)
	{
		if(ch[i]!=0)
		{
			printf("%c=%d\n",c[i],ch[i]);
	        t++;
		}
	}

	if(t==0)
		printf("No");
	return 0;
}