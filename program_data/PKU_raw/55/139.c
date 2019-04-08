void main()
{
	int length,original,then,change[100],i,j,k,s=0,m,length2;
	char input[100],output[100];
	scanf("%d %s %d",&original,input,&then);
	length=strlen(input);
	for(i=0;i<length;i++)
	{
		if(input[i]<='9') change[i]=input[i]-48;
		else if(input[i]>='a') change[i]=input[i]-87;
		else change[i]=input[i]-55;
	}
	for(i=0;i<length;i++)
	{
		s=s+pow(original,length-i-1)*change[i];
	}
	for(j=0;;j++)
	{
		m=s%then;s=s/then;
		{
			if(s==0) 
			{
				if((m<=9)&&(m>=0)) {output[j]=m+48;break;}
				else if((m>9)&&(m<=35)) {output[j]=m+55;break;}
			}
			else
			{
				if((m<=9)&&(m>=0)) output[j]=m+48;
		     	else if((m>9)&&(m<=35)) output[j]=m+55;
			}
		}
	}
	for(k=0;k<j+1;k++)
		printf("%c",output[j-k]);
	printf("\n");
}