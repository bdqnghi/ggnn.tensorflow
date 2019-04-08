
main()
{
	char str[MAX];
	char c;
	int i,num,flg;
	scanf("%s",str);
	flg=0;
	for (i=0;;i++)
	{
	
		if ((i!=0) && (str[i]==str[i-1] || str[i]==str[i-1]-32 || str[i]==str[i-1]+32))
		{
				num=num+1;	
		}
		else if (str[i]>='A' && str[i]<='Z') 
			{
				if (flg)
					printf("(%c,%d)",c,num);
				flg=1;
				c=str[i];
				num=1;	
			}
				else
				{
					if (flg)
						printf("(%c,%d)",c,num);
					flg=1;
					c=str[i]-32;
					num=1;	
				}
		if (str[i]=='\0')
			break;	
	}
} 