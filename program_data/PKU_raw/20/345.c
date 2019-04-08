void main()
{
	char str[11],substr[4],ans[15];
	int i,index,max,length;
	while(scanf("%s%s",str,substr)!=EOF)
	{
	max=str[0];
	for(i=0;str[i]!='\0';i++)
		if(str[i]>max)
		{
		  max=str[i];
	      index=i;}
	length=i;
	strncpy(ans,str,index+1);
	for(i=0;substr[i]!='\0';i++)
		ans[index+1+i]=substr[i];
	for(i=index+1;str[i]!='\0';i++)
		ans[i+3]=str[i];
	ans[length+3]='\0';
	printf("%s\n",ans);}
	


}