void main()
{
	int max,min,len,i,j;
	char *p,*q,*max_index,*min_index,a[1024];
	gets(a);
	max=0;
	min=100;
	for(p=q=a;;)
	{
		if(*q==' '||*q=='\0')
		{   len=q-p;
			if(len>max)
			{
				max=len;
				max_index=p;
			}
			if(len<min)
			{
				min=len;
				min_index=p;
			}
			if(*q=='\0') break;
		    q=p=q+1;
		}
		else
			q++;
		
	}
	for(;*max_index!=' '&&*max_index;max_index++)
		printf("%c",*max_index);
	printf("\n");
	for(;*min_index!=' '&&*min_index;min_index++)
		printf("%c",*min_index);
	printf("\n");

}