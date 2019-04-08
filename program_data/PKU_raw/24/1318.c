void main()
{
	char str[1000],*p,*q,*max_index,*min_index;
	int len,max=0,min=100000;
	gets(str);
	for(p=q=str;*p;p++)
	{
		if(*p==' ')
		{len=p-q;
		if(len>max)max=len,max_index=q;
		if(len<min)min=len,min_index=q;
		q=p+1; 
		}
		if(*(p+1)=='\0')
		{len=p+1-q;
		if(len>max)max=len,max_index=q;
		if(len<min)min=len,min_index=q;
		}
	}
		while(*max_index!=' '&&*max_index!='\0')
		{
			printf("%c",*max_index);
			max_index++;
		}
		printf("\n");
		while(*min_index!=' '&&*min_index!='\0')
		{
			printf("%c",*min_index);
			min_index++;
		}
}

