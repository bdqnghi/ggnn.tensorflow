void main()
{
	int a,b,t,i,j,n;
	char s1[33],s2[33],temp;
	scanf("%d %s %d",&a,s1,&b);
	n=strlen(s1);
	t=0;
	for(i=0;i<n;i++)
	{
		if(s1[i]>='0'&&s1[i]<='9') t=t*a+(s1[i]-'0'); 
		if(s1[i]>='a'&&s1[i]<='z') t=t*a+(s1[i]-'a'+10); 
		if(s1[i]>='A'&&s1[i]<='Z') t=t*a+(s1[i]-'A'+10);
	}
	i=0;
	do
	{
		if(t%b>=0&&t%b<=9) s2[i]=t%b+'0'; 
		if(t%b>=10&&t%b<36) s2[i]=t%b-10+'A';
		t=t/b;
		i++;
	}
	while(t!=0);
	s2[i]='\0';
	for(j=i-1;j>=i/2;j--) 
	{
		temp=s2[j];
		s2[j]=s2[i-1-j];
		s2[i-1-j]=temp;
	}
	printf("%s",s2);
}