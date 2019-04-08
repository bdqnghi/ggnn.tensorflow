int main(int argc, char* argv[])
{
    int i,j,count=0;
	char s[50],w[50],*ps;
	scanf("%s %s",s,w);
    for(i=0;i<50;i++)
	{
		if(w[i]==s[0])
		{
			j=i;
			for(ps=s;*ps!='\0';ps++,i++)
			{
               if(*ps!=w[i])
				   count++;
			}
			if(count==0)
				printf("%d",j);
	
		}
	}
	return 0;
}