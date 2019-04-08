int main()
{
	char str[100];
	int i=0,j=1,total=1,num[100],end[100],start[100],k;
	gets(str);
	start[1]=1;
	for(i=0;i<strlen(str);i++)
    {if(str[i]==' ')
	{num[j]=i;end[j]=i;start[j+1]=i+2;j++;total++;}}
	end[total]=strlen(str);
	
	for(j=total;j>1;j--)
	{for(k=start[j]-1;k<=end[j]-1;k++)
	{if(k!=end[j]-1)
		printf("%c",str[k]);
		else
			printf("%c ",str[k]);}}
			if(j=1)
				for(k=0;k<end[1];k++)
				printf("%c",str[k]);
	return 0;	
}