void main()
{
	int i,j,a,b,c;
	char str1[50],str2[50];
	for(i=0;i<50;i++)
	{
		scanf("%c",&str1[i]);
		if(str1[i]==' ') break;
	}
	a=i;
	gets(str2);
	b=strlen(str2);
	for(i=0;i<b;i++)
	{
		if(str1[0]==str2[i])
		{
			for(j=0;j<a;j++,i++)
			{
				if(str1[j]==str2[i])
					continue;
				else break;
			}
			if(j==a) 
			{
				c=i-a;
				printf("%d\n",c);
				break;
			}
			else 
			{
			i=i-j;
			continue;
			}
		}
		else continue;
	}
}
