
char sen[200],a[100],b[100],re[400];
int alen,blen;

int test(int n)
{
	int j=0;
	char *p1,*p2;
	p1=sen+n;
	p2=a;
	if(n!=0){
		if(*(p1-1)!=' ')return 0;}
	do
	{
		if(*p1!=*p2){
			j=1;
		}
			p1++;
			p2++;
	}while(p2-a<alen);
	if(*p1!=' '&&*p1!='\0')return 0;
	if(j==0)
		return 1;
	else return 0;
	
}

void main()
{

	int l;
	char *write=re;
	const char *read=sen;
	gets(sen);
	gets(a);
	gets(b);
	alen=strlen(a);
	blen=strlen(b);
	for(;read-sen<200;read++)
	{
		if(test(read-sen)==1)
		{
			
			for(l=0;l<blen;l++){*(write+l)=b[l];}
			write+=blen;
			read+=alen-1;
		}
		else{
			*write=*read;
			write++;}
	}

	printf("%s",re);
}
