void main()
{ 
	char c[101],q[101];
	int a,i,j,b,len;
	long int p=0,x,d;
	scanf("%d",&a);
	scanf("%s",c);
	scanf("%d",&b);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		if((c[i]>='A')&&(c[i]<='Z')) x=c[i]-'A'+10;
		else if((c[i]>='a')&&(c[i]<='z')) x=c[i]-'a'+10;
		else x=c[i]-'0'+0;
		for(j=1;j<len-i;j++) x*=a;
		p+=x;
	}
	i=0;
	do
	{
		
		x=p%b;
		if(x>9) q[i]=x-10+'A';
		else q[i]='0'+x;
		p/=b;
		i++;
	}while(p!=0);
	for(j=i-1;j>=0;j--) printf("%c",q[j]);
}