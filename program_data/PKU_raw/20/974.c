int main()
{
	char str[11],substr[4],x[15];
	int max,num,i,j;
	while(1)
	{
		max=0;
		
		if(scanf("%s%s",str,substr)==EOF)
		{
			break;
		}
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				num=i;
			}
		}
		strncpy(x,str,num+1);
		for(j=num+1;j<=num+strlen(substr);j++)
		{
			x[j]=substr[j-num-1];
		}
		
		for(j=num+strlen(substr)+1;j<strlen(substr)+strlen(str);j++)
		{
			x[j]=str[j-strlen(substr)];
		}
		x[j]='\0';
		printf("%s\n",x);
	}
	return 0;
}
