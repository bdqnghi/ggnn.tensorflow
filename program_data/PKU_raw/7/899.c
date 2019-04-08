void main()
{
	char a[500],word1[100],word2[100];
	scanf("%s%s%s",a,word1,word2);
	int la,l1,l2,i,j,k,flag;
	la=strlen(a);
	l1=strlen(word1);
	l2=strlen(word2);
	for(i=0;i<la;i++)
	{
		if(a[i]==word1[0])
		{
			for(j=0;j<l1;j++)
			{
				flag=1;
				if(a[i+j]!=word1[j]) 
					flag=0;
				else
					flag=1;
			}
		    if(flag==1)
			{
			    for(k=0;k<l2;k++)
				{
				    a[i+k]=word2[k];
				}
			}
			if(flag==1)
			{
				printf("%s\n",a);
				break;
			}
		}
		if(i==la-1)
		{
			printf("%s\n",a);
		}
	}
}

					
	