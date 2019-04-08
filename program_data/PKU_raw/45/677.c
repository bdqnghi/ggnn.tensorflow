void main()
{
	int len_1,len_2,j,k,temp;
	char str[50],str1[50];
	scanf("%s%s",str,str1);
	len_1=strlen(str);
	len_2=strlen(str1);
	for(j=0;j<=(len_2-len_1);j++)
		{
		    temp=j;
			for(k=0;k<len_1;k++)
			{
				if(str[k]==str1[j+k])
				{
				}
				else
				   break;
			}
			if(k>=len_1)
			{
				printf("%d\n",temp);
				break;
			}
		}
}