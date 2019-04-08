int main()
{
	long mizhi(int input1,int input2);
	long a,b,temp,temp1=0,temp2,temp3;
	int n,i,j,k=0;
	char str[1000];
	scanf("%d%s%d",&a,&str,&b);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			temp2=str[i]-55;
		}
		else if(str[i]>=97&&str[i]<=122)
		{
			temp2=str[i]-87;
		}
		else if(str[i]>=48&&str[i]<=57)
		{
			temp2=str[i]-48;
		}
		temp1=temp1+temp2*mizhi(a,n-1-i);
	}
	temp=temp1;
	for(j=0;;j++)
	{
		if(temp<b)
		{
			break;
		}
		else
		{
			temp=temp/b;
			k++;
		}
	}
	for(i=0;i<=k;i++)
	{
		if(temp1>=b)
		{
			if(temp1/mizhi(b,k-i)<=9)
			{
		printf("%ld",temp1/mizhi(b,k-i));
		temp1=temp1%mizhi(b,k-i);
			}
			else
			{
			printf("%c",55+temp1/mizhi(b,k-i));
		temp1=temp1%mizhi(b,k-i);
			}
		}
		else if(temp1<b&&k-i!=0)
		{
			printf("0");
		}
		else
		{
			if(temp1<=9)
			{
		printf("%ld",temp1);
			}
			else
			{
			printf("%c",55+temp1);
			}
			break;
		}
	}
}

long mizhi(int input1,int input2)
{
	int z=1,k=1;
	if(input2==0)
	{
		return(1);
	}
	else
	{
	do
	{
		z=z*input1;
		k++;
	}while(k<=input2);
	}
	return(z);
}