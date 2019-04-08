
int bigint1(char*str,int*a)
{
	int len=(int)strlen(str);
	int i;
	for(i=0;i<len;i++)
		a[len-i-1]=str[i]-'0';
	return len;
}

void bigint2(int*a,int len)
{
	int k=len-1;
	int i;
	while(a[k]==0&&k>0)
		k--;
	for(i=k;i>=0;i--)
		printf("%d",a[i]);
}

int bigint3(int*a,int alen,int*b,int blen,int*c)
{
	int i;
	for(i=0;i<alen;i++)
	{
		c[i]=a[i];
		if(i<blen) c[i]-=b[i];
	}
	for(i=0;i<alen;i++)
	{
		if(c[i]<0)
		{
			c[i+1]--;
			c[i]+=10;
		}
	}
	return c[alen-1]?alen:(alen-1);
}

int main(int argc, char* argv[])
{
	char s1[300],s2[300];
	int a[300],b[300],c[300];
	int alen,blen,clen;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%s",s1,s2);
		alen=bigint1(s1,a);
		blen=bigint1(s2,b);
		clen=bigint3(a,alen,b,blen,c);
		bigint2(c,clen);
		printf("\n");
	}
	return 0;
}
