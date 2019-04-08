int main()
{
	int a,b,n,c=0,d,j,i=0,m,s[100];
	char num1[100]={0},num2[100]={0};
	scanf("%d",&a);
	scanf("%s",num1);
	scanf("%d",&b);
	n=strlen(num1);
	for(i=0;i<n;i++)
	{
		if(num1[i]>='a'&&num1[i]<='z')
		{
			num1[i]=num1[i]-32;
		}
	}
	for(i=0;i<n;i++)
    {
        d=1;
        if(num1[i]>='0' &&num1[i]<='9')
        {
            for(j=1;j<n-i;j++)
            {
                d=d*a;
            }
            c=c+(num1[i]-'0')*d;
        }
        else if(num1[i]>='A'&&num1[i]<='Z')
        {    
            for(j=1;j<n-i;j++)
            {
                d=d*a;
            }

            c=c+(num1[i]-'A'+10)*d;
        }
        
    } 
	m=0;
	if(c!=0){
	while(c!=0)
	{
		s[m]=c%b;
		c=(c-s[m])/b;
		m++;
	}
	for(i=0;i<m;i++)
	{
		if(s[i]>=0&&s[i]<=9)
		{
			num2[m-i-1]=s[i]+'0';
		}
		else
		{
			num2[m-i-1]=s[i]-10+'A';
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%c",num2[i]);
	}
	printf("\n");
	}
	else if(c==0)
	{
		printf("%d\n",c);
	}
	return 0;
}