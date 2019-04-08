void turn(char str[100])
{
	int n,i,t;
	n=strlen(str);
	for(i=0;i<=(n-1)/2;i++)
	{
		t=str[i];
		str[i]=str[n-i-1];
		str[n-i-1]=t;
	}
}

int min(int x,int y)
{
	int z;
	if(x>=y)
		z=y;
	else
		z=x;
	return(z);
}

void miner(char str1[100],char str2[100],char str3[100])
{
	int t,i,m,n;
	m=strlen(str1);
	n=strlen(str2);
	t=min(m,n);
	for(i=0;i<t;i++)
	{
		if(str1[i]>=str2[i])
			str3[i]=str1[i]-str2[i]+48;
		else
		{
			str3[i]=str1[i]+10-str2[i]+48;
			str1[i+1]--;
			str3[i+1]--;
		}
	}
}

void main()
{
	char a[100],b[100],t[2],c[100];
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		gets(t);
		gets(a);
		gets(b);
		turn(a);
		turn(b);
		strcpy(c,a);
		miner(a,b,c);
		turn(c);
		puts(c);
	}
}

