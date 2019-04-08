void main()
{
	int n,i,j,flag=1,len;
	char (*name)[124],p[10];
	scanf("%d/n",&n);
	gets(p);
	name=(char (*)[124])malloc(124*sizeof(char)*20);
	    gets(*name);
	for(i=1;i<n;i++)
	{   
		  gets(*(name+i));
	}
	for (i=0;i<n;i++)
	{
		flag=1;
		len=strlen(*(name+i));
		if(**(name+i)=='_'||(**(name+i)<='Z'&&**(name+i)>='A')||('a'<=**(name+i)&&**(name+i)<='z'))
		{
			for(j=1;j<len;j++)
			{
				if(!(('0'<=*(*(name+i)+j)&&*(*(name+i)+j)<='9')||('A'<=*(*(name+i)+j)&&*(*(name+i)+j)<='Z')||('a'<=*(*(name+i)+j)&&*(*(name+i)+j)<='z')||*(*(name+i)+j)=='_'))
				flag=0;
				
			}
			{if(flag==0) printf("0\n");
			else printf("1\n");}
		}
	    else printf("0\n");
	}
}