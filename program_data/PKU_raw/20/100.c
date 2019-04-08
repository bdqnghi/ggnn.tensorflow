void main()
{
	char str[10],str1[10],substr[4],letter,result[13],
	b[10]={'\0'},string[13];//??result????????????????????
	int a[10]={0,1,2,3,4,5,6,7,8,9},m,l,i,j,time;
	for(time=1;time<100;time++)
	{
	for(i=0;i<10;i++)
	{
		str[i]='\0';
	}
	for(i=0;i<13;i++)
	{
		result[i]='\0';
	}
	for(i=0;i<4;i++)
	{
		substr[i]='\0';
	}
	for(i=0;i<10;i++)
	{
		a[i]=i;
	}
	for(i=0;i<10;i++)
	{
		b[i]='\0';
	}
	for(i=0;i<13;i++)
	{
		string[i]='\0';
	}

	gets(string);
	if(strlen(string)==0) break;//??????????????
		for(i=0;string[i]!=' ';i++)
		{
			str[i]=string[i];
		}
	//scanf("%s",str);
	//getchar ();//??????????????.
	//scanf("%s",substr);
	l=strlen(str);
    for(i=l+1,j=0;i<l+4,j<3;i++,j++)
	{
		substr[j]=string[i];
	}
	substr[3]='\0';//???????????????????'\0'????????
	strcpy(str1,str);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(str1[j]<str1[j+1])
			{
				letter=str1[j],m=a[j];
				str1[j]=str1[j+1],a[j]=a[j+1];
				str1[j+1]=letter,a[j+1]=m;
			}//a[j]????str1[j]?????.
		}
	}
	m=a[0];
	strncpy(result,str,m+1);
	strcat(result,substr);//??strcat,???strcpy!!
	for(i=0;i<l-m-1;i++)
	{
		str1[i]=str[i+m+1];
	}
	strncpy(b,str1,l-m-1);//???????????????.
	strcat(result,b);
	printf("%s\n",result);
	}
}

