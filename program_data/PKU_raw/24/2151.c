void main()
{
	char c[1000];
	int i,count=0,max,min,mark1,mark2,length;
	gets(c);
	length=strlen(c);
	for(i=0;i<length+1;i++)
	{
		if(c[i]!=' '&&c[i]!='\0')
			count++;
		else
		{
			if(c[i-1]==',')
				count--;
			max=min=count;
			count=0;
			mark1=mark2=0;
			break;
		}
	}
	for(i=0;i<length+1;i++)
	{
		if(c[i]!=' '&&c[i]!='\0')
			count++;
		else
		{
			if(c[i-1]==',')
				count--;
			if(max<count)
			{
				max=count;
				mark1=i-max;
			}
			if(min>count)
			{
				min=count;
				mark2=i-min;
			}
			count=0;
		}
	}
	for(i=0;i<max;i++)
		printf("%c",c[mark1+i]);
	printf("\n");
	for(i=0;i<min;i++)
		printf("%c",c[mark2+i]);
	printf("\n");
}