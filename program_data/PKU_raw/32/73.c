void main()
{
	char str1[100],str2[100];
	int count,k,i,j,l1,l2,m,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%s",str1);
		scanf("%s",str2);
		count=0;
		l1=strlen(str1);
		l2=strlen(str2);
		j=l1-1;
        for(k=l2-1;k>=0;k--)
		{
			if(str1[j]>=str2[k])
				str1[j]=str1[j]-str2[k]+48;
			else
			{
				str1[j]=str1[j]+58-str2[k];
				for(m=j-1;m>=0;m--)
				{
					if(str1[m]!='0')
					{
						str1[m]--;
						break;
					}
					else
					   str1[m]='9';
				}
			}
			j--;
		}
       for(k=0;str1[k]!='\0';k++)
	   {
		   if(str1[k]=='0')
			   count++;
                     else
                       break;
	   }
	   for(k=count;str1[k]!='\0';k++)
	   {
		   printf("%c",str1[k]);
	   }
	   printf("\n");
	   }
}


			