void main()
{
	int n,i,j=0,k=0,len,flag=0;
	char str[501],word[500][6];
	for(i=0;i<500;i++)
		for(j=0;j<6;j++)
			word[i][j]='\0';
	scanf("%d\n",&n);
    gets(str);
	len=strlen(str);
	j=0;k=0;
    for(i=0;i<len;i++)
	{
	   word[k][j]=str[i];
	   j++;
	   if(j==n) 
	   {
		   k++;
		   i=i-n+1;
		   j=0;
	   }
	}
	int count[501]={0};
	for(i=0;i<k;i++)
	 if(word[i][0]!=0)
	 {
		 for(j=i+1;j<k;j++)
			 if(strcmp(word[i],word[j])==0) {count[i]++; word[j][0]=0;}
	 }
	for(i=0;i<k;i++)
		if(count[i]!=0) break;
	if(i==k) printf("NO");
	else
	{
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
			if(count[i]<count[j]) break;
			if(j==k) {printf("%d\n",count[i]+1); printf("%s\n",word[i]);flag=1;}
		if(flag==1) break;
	}
	for(i=i+1;i<k;i++)
    {
		for(j=0;j<k;j++)
			if(count[i]<count[j]) break;
			if(j==k) {printf("%s\n",word[i]);}
	}
    }
}