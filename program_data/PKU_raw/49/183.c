void huiwen(char string[500],int full,int length)
{
	int x,y,u,i;
	for(x=0;x<=full-length+1;x++)
    {   
         i=1;         
		for(y=x;y<=x+length-1;y++)
		{
			if(string[y]==string[2*x+length-1-y])
				i=i*1;
			else
				i=i*0;
		}
		if(i==1)
		{
			for(u=x;u<=x+length-1;u++)
				printf("%c",string[u]);
			printf("\n");
		}
	}
}
		
int main()
{
	char str[500];
	gets(str);
	int w;
	w=strlen(str);
	int v;
	for(v=2;v<=w;)
	{
	  huiwen(str,w,v);
	  v=v+2;
	}
	return 0;
}	
