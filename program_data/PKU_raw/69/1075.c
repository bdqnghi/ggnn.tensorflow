int main()
{
	int i,j,num1=0,num2=0,k1,k2,a,b,tmp=0,head=0;
	char m[251];
	char n[251];
	char total[255];
	char x[251];
	char y[251];
	gets(m);
	gets(n);
	for(i=0;m[i]!='\0'&&(m[i]>='0'&&m[i]<='9');i++)
	{
		num1++;
	}
	m[i]='\0';
	for(j=0;n[j]!='\0'&&(n[j]>='0'&&n[j]<='9');j++)
	{
		num2++;
	}
	n[j] = '\0';
	if(num1>=num2)
	{
		strcpy(x,m);
		strcpy(y,n);
		k1=num1;
		k2=num2;
	}
	else
	{
		strcpy(x,n);
		strcpy(n,m);
		num1 = strlen(x);
		num2 = strlen(n);
		k1=num1;
		k2=num2;
	}

	{
		for(j=num1;j>num1-num2-1;j--)
		{
			n[j]=n[k2];
			k2--;
		}
		for(j=num1-num2-1;j>=0;j--)
		{
			n[j]='0';
		}
		for(j=num1-1;j>=0;j--)
		{
		   if(x[j]-'0'+n[j]-'0'+tmp>9)
		   {
			  total[j]='0'+(x[j]-'0'+n[j]-'0'+tmp)%10;
			  tmp = 1;
		   }
		   else
		   {
			  total[j]='0'+(x[j]-'0'+n[j]-'0'+tmp)%10;
			  tmp = 0;
		   }
		}
		total[num1]= '\0';
		if( tmp ==1 )
		{
			printf("1");
			head = 1;
		}
	    for(j=0;j<num1;j++)
		{
			if(total[j]=='0'&&head==0) continue;
			head = 1;
			printf("%c",total[j]);
		}
		printf("\n");
	}
    return 0;
}