  
int main()
{
	char juzi[9999],danci1[101],danci2[101];
	int i,j=0,k,l,length1,length2,count=0;
	gets(juzi);
	scanf("%s%s",danci1,danci2);
	for(i=0;i<strlen(juzi);i++)
	{
		if(i==0||juzi[i-1]==' ')
			for(j=0;j<strlen(danci1);j++)
			{
				if(*(juzi+i+j)==*(danci1+j))
					count++;
				else
				{
					count=0;
					break;
				}
			}
		if(count!=0)
		{
			printf("%s",danci2);
			i+=strlen(danci1)-1;
			count=0;
		}
		else printf("%c",juzi[i]);
	}
	return 0;
}
