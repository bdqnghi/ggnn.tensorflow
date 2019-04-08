void insert(char str[],char substr[])
{
	int i,j,k,lenstr,lensubstr,lentemp,max;
	char temp[10]={0};
	lenstr=strlen(str);
	lensubstr=strlen(substr);
	max=0;
	for(i=0;i<=lenstr-1;i++)
	{
		if(str[i]>str[max])
		max=i;
	}
	for(i=0,j=max+1;j<=lenstr-1;i++,j++)
		temp[i]=str[j];
	lentemp=strlen(temp);
	for(i=0,j=max+1;i<=lensubstr;i++,j++)
	    str[j]=substr[i];
	for(i=0,k=j-1;i<=lentemp-1;i++,k++)   
	    str[k]=temp[i];
}
void main()
{
	char str[20]={0},substr[4]={0};
	int len,i;
	while(scanf("%s%s",str,substr)!=EOF)
	{
		insert(str,substr);
		len=strlen(str);
		for(i=0;i<=len-1;i++)
		printf("%c",str[i]);
		printf("\n");
		for(i=0;i<=19;i++)
		str[i]=0;
		for(i=0;i<=3;i++)
		substr[i]=0;
	}
}
		
