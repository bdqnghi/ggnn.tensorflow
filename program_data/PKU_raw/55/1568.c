
int main(int argc, char* argv[])
{
	int i,j=0,k,l,n,m,a,b,put[100];
	long num=0;
	char str[100];
	scanf("%d%s%d",&a,str,&b);
    m=strlen(str);
	if(str[0]=='0')
	{
		printf("0");
		return 0;
	}
	else
	{for(i=0;i<m;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
			n=str[i]-'0';
		else if(str[i]>='a'&&str[i]<='z')
			n=str[i]-'a'+10;
		else 
			n=str[i]-'A'+10;
		num+=n*pow(a,m-i-1);
	}                                                   //num????????
	while(num>0)
	{
		put[j]=num%b;
		j++;
		num=num/b;
	}
	for(k=j-1;k>=0;k--)                                 //???????
	{
		if(put[k]>=0&&put[k]<=9)
			printf("%d",put[k]);
		else 
			printf("%c",((char)(put[k]-10))+'A');
	}
	}
	return 0;
}
