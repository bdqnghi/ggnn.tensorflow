int main()
{
	char str[100];
	int i,len,count,p,t,flag,m,sum=0;
	gets(str);
	len=strlen(str);
	for(t=0;t<len;t++)
	{
		if(str[t]!='\0')
		{
			for(i=0;i<len;i++)
			{
				count=0;
				if(str[i]==' ')
				{
					flag=1;
					for(p=i;p<len;p++)
					{
						if(str[p]==' ')
						{
							flag*=1;
							count+=1;
						}
						else
						{
							flag*=0;
							break;
						}
					}
					if(count>1)
						for(m=0;m<len;m++)
							str[i+1+m]=str[i+count+m];
				}
				
				if(count>1)
				{
					sum+=count-1;
					break;
				}
			}
		}
	}
	for(i=0;i<len-sum;i++)
		printf("%c",str[i]);
	printf("\n");
	return 0;
}
