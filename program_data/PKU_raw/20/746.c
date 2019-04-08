void main()
{
	char str[20],substr[4];
	int max,i,j,k,p,length;
	while(scanf("%s %s",str,substr)!=EOF)
	{
		length=strlen(str);
		max=str[0];
		for(i=1;i<length;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				k=i;
			}
		}
		for(j=length-1;j>=k+1;j--)
		{
			str[j+3]=str[j];
		}
		str[k+1]=substr[0];
		str[k+2]=substr[1];
		str[k+3]=substr[2];
		for(p=0;p<length+3;p++)
		{
			printf("%c",str[p]);
		}
		printf("\n");
	}
}