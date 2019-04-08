void main()
{
	char str[100],temp;
	int i,j,l,k,num;
	for(i=0;i<6;i++)
	{
		scanf("%s",str);
		l=strlen(str);
		k=0;
		if(str[0]=='-')
		{
			k=1;l++;
			if(str[1]!='0')
				printf("%c",str[0]);//-0??????              
		}
		for(j=k;j<l/2;j++)
		{
			temp=str[j];
			str[j]=str[l-1-j];
			str[l-1-j]=temp;
		}
		

		num=str[k]-'0';
		if(k)
		{
                  for(j=k+1;j<l-1;j++)
                  {
                    num=num*10+str[j]-'0';	
                     }
                  printf("%d\n",num);
		}
		else
		{
                for(j=k+1;j<l;j++)
                  {
                    num=num*10+str[j]-'0';	
                     }
                  printf("%d\n",num);
		}
	}
}