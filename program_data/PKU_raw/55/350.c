void main()
{
	int a1,b1,temp=0,numtemp[10];
	char num1[10],num2[10],c;
	int i=0,j=0,k=0,n;
	scanf("%d %s %d",&a1,num1,&b1);
	while(num1[i]!='\0')
	{
		if(num1[i]>=97&&num1[i]<=122)
			num1[i]-=32;
		if(num1[i]>=65&&num1[i]<=90)
			numtemp[i]=num1[i]-55;
		else
			numtemp[i]=num1[i]-48;
		i+=1;
	}
	i-=1;
	for(j=0;j<=i;j++)
		temp+=numtemp[j]*power(a1,i-j);
	i=0;
	j=0;
	while(power(b1,i)<temp)
		i++;
	j=i-1;
	for(k=0;k<i;k++)
	{
		n=temp/power(b1,j);
		if(n>=10)
			c=(char)(n+55);
		else
			c=(char)(n+48);
		temp-=power(b1,j)*n;
		j--;
		num2[k]=c;
		n=0;
	}
	num2[k]='\0';
	if(k!=0)
	    printf("%s\n",num2);
	else
		printf("0\n");
}