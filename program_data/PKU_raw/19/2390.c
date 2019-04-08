void main()
{
	char str[100],str2[100],original[100],word[100],replace[100];
	int len ;
	gets(str);
	len = strlen(str);
	str[len]=' ';
	str[len+1]='\0';
	gets(original);
	gets(replace);
	int i = 0 ,p = 0 ,wordlen = 0 ,j = 0,temp=0 , k ,n=0;
	int t = 0;
	while(i<strlen(str))
	{

		if(str[i]!=' ')
		{
			word[j]=str[i];
			j++;
			i++;
			temp=1;
		}else if(temp==1)
		{
			word[j]='\0';
	/*	printf("??word:");
			while(t<strlen(word))
			{
				printf("%c",word[t]);
				t++;
			}
			printf("\n");*/
			t=0;
			if(strcmp(word,original)==0)
			{
				for(k=0;k<(i-j);k++)//???????????str2
				{
					str2[k] = str[k];
				}
				n = 0 ;
				while(n<strlen(replace))//????????
				{
					str2[k]=replace[n];
					n++;
					k++;
				}
				n = i ;
				while(n<strlen(str))//???????????
				{
					str2[k]=str[n];
					n++;
					k++;
				}
				n=0;
				while(n<k)//????str
				{
					str[n]=str2[n];
					n++;
				}
				str[n]='\0';
				i = 0;//??????
			}else
			{
				i++;//?????????
			}
			j=0;
			temp=0;
		}else if(temp==0)//??????
		{
			i++;
		}
	}
	i = 0 ;
	while(i<strlen(str)-1)
	{
		printf("%c",str[i]);
		i++;
	}

}