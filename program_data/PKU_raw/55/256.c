int zheng (char x);
char fan(int x);

int main()
{
	int n,m,f,sum=0,wei=0,i;
	char zhuan[50];
	scanf("%d",&n);
	char x[10];
	scanf("%s",x);
	scanf("%d",&m);
	f=strlen(x);
    for(i=0;i<f;i++)
	{
			sum+=zheng(x[i])*pow(n,f-i-1);
	}
	for(i=49;i>=0;i--)
	{
		zhuan[i]=fan(sum%m);
		wei++;
		sum=sum/m;
		if(sum==0)
			break;
	}
	for(i=50-wei;i<50;i++)
	{
		printf("%c",zhuan[i]);
	}
	return 0;
}
    

    int zheng(char x)
	{
		int m;
		if(x>='a'&&x<='z')
			m=x-87;
		else if(x>='A'&&x<='Z')
			m=x-55;
		else
			m=x-48;
		return m;
	}


	char fan(int x)
	{
		char m;
		if(x>=0&&x<=9)
		    m=x+48;
		else if(x>=10&&x<=35)
			m=x+55;
		return m;
	}