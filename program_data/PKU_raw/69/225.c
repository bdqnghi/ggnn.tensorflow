char s1[200],s2[200];
int a[200],b[200],c[200];
int alen,blen,clen;

int str2bigint(char*str,int*t)
{
	int len=(int)strlen(str);
	int i;
	for(i=0;i<len;i++)
		t[i]=str[len-i-1]-'0';
	return len;
}

void print_int(int*a)
{
	int k=199;
	int i;
	while(a[k]==0&&k>0)
		k=k-1;
    for(i=k;i>=0;i--)
		printf("%d",a[i]);
}


int add_bigint(int*a,int alen,int*b,int blen,int*c)
{
	int i;
	int temp = 0;
	int tmpsum = 0;
	int len=(alen>blen)?alen:blen;
	for(i=0;i<len;i++)
	{
		tmpsum = a[i] + b[i] + temp;
		c[i] = tmpsum % 10;
		temp = tmpsum /10;
	}
	if( temp != 0)
	{
		c[len] = temp;
		return len+1;
	}
	else
		return len;
}

int main(int argc, char*argv[])
{
	//int N,i;
    
	//scanf("%d",&N);
   // for(i=1;i<=N;i++)
	//{
		scanf("%s%s",s1,s2);

		alen=str2bigint(s1,a);
		
		blen=str2bigint(s2,b);
	
		clen=add_bigint(a,alen,b,blen,c);
		print_int(c);
//}
		return 0;
}
