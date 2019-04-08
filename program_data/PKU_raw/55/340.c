
int t[100]={0};
int a,b;

unsigned long int atoten(char *p)
{
	unsigned long int s=0;
    int len,i;

	len=strlen(p);

	p=p+len-1;

	for(i=0;i<len;i++,p--)
	{
		if(*p>='0' && *p<='9')
		s=s+(*p-'0')*pow(a,i);
		else if(*p>='a' && *p<='z')
			s=s+(*p-'a'+10)*pow(a,i);
		else s=s+(*p-'A'+10)*pow(a,i);

	}

	return s;

}


int tentob(unsigned long int s)
{
	int i,k;

	for(i=0;s!=0;i++)
	{
		t[i]=s%b;
		s=s/b;
	}
	k=i-1;
	return k;

}

void print(int k)
{
	int i;

	if(k<0) printf("0");

	for(i=k;i>=0;i--)
	{
		if(t[i]>9)
		{
			t[i]+='A'-10;
			printf("%c",t[i]);
		}
		else printf("%d",t[i]);
		
	}

}

void main()
{
	unsigned long int s;
	char n[100]={'\0'};
	int k;

	scanf("%d %s %d",&a,n,&b);
	

	s=atoten(n);
	k=tentob(s);
	print(k);


}