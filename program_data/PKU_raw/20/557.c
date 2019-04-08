int main()
{
	int i,j,k;
	char str[500],sub[4],*st=str,*su=sub,c;
	while(scanf("%s%s",str,sub))
	{
		k=strlen(str);
		if(k==0)break;
		c=*st;
		j=0;
		for(i=0;i<k;i++)
			if(*(st+i)>c)
			{
				c=*(st+i);
				j=i;
			}
		for(i=k;i>j;i--)
			*(st+i+3)=*(st+i);
		for(i=1;i<4;i++)
			*(st+j+i)=*(su+i-1);
		printf("%s\n",st);
		*st=0;
	}
	return 0;
}