void main()
{
	char str[300],sub[300],rep[300],tmp[300];
	scanf("%s%s%s",str,sub,rep);
	int i,j,l1=strlen(str),l2=strlen(sub),l3=strlen(rep);
	int flag=0;
	for(i=0;i<l1;i++)
	{
		for(j=0;j<l2;j++)
		{
			tmp[j]=str[j+i];
		}
		tmp[l2]='\0';
		if(strcmp(tmp,sub)==0&&flag==0) {printf("%s",rep);flag=1;i+=l2-1;}
		else printf("%c",str[i]);
	}
	printf("\n");
}