
int main()
{
	char zhuan[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int a,b;
	char c[64],r[64];
	int i,k;
	long sum=0;
	int q=0,w[64];
	scanf("%d %s %d",&a,c,&b);
	for(i=0;c[i];i++)
	{if(c[i]>='0'&&c[i]<='9')
	    k=c[i]-'0';
    else if(c[i]>='A'&&c[i]<='Z')
		k=c[i]-'A'+10;
	else if(c[i]>='a'&&c[i]<='z')
		k=c[i]-'a'+10;
	sum=sum*a+k;}
    if(sum==0)
		printf("0\n");
	if(sum!=0)
	{while(sum>0)
	{w[q]=sum%b;
	sum=sum/b;
	q++;}//*
	for(i=0;i<q;i++)
	{r[q-1-i]=zhuan[w[i]];
	}
	for(i=0;i<q;i++)
		printf("%c",r[i]);}
	
    return 0;
}
