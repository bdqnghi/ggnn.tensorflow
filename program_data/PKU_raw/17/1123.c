
right(char s[],int i,int n)
{
	int j;
	int left=0,right=0;
	int num=0;

	for(j=i+1;j<n;j++){
		if(s[j]=='(') right++;
		if(s[j]==')') left++;
		if(right<left) {num=1;break;}
	}
	return(num);
}

left(char s[],int i)
{
	int j;
	int left=0,right=0;
	int num=0;
	
	for(j=i-1;j>=0;j--){
		if(s[j]=='(') right++;
		if(s[j]==')') left++;
		if(right>left) {num=1;break;}
	}
	return(num);
}

trans(char s1[],char s2[])
{
	int len;
	int i;
	len=strlen(s1);

	for(i=0;i<len;i++){
		if(s1[i]!=')'&&s1[i]!='(')
			s2[i]=' ';

			if(s1[i]==')')
			{
				if(left(s1,i)==1) s2[i]=' ';
				else s2[i]='?';
			}

			if(s1[i]=='(')
			{
				if(right(s1,i,len)==1) s2[i]=' ';
				else s2[i]='$';
			}
	}
	s2[len]='\0';
	return;
}



main()
{
	int i,j;
	int n;
	struct aaa
	{
		char s1[105];
		char s2[105];
	};
	struct aaa line[20];

	scanf("%d\n",&n);



	for(i=0;i<n;i++){
	
		gets(line[i].s1);
		trans(line[i].s1,line[i].s2);
	}

	for(i=0;i<n;i++)
		printf("%s\n%s\n",line[i].s1,line[i].s2);
}