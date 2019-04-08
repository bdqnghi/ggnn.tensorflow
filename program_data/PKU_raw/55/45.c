
long toDex(int a,char n[]);
int toB(long Dn,int b,char answer[]);

main()
{
	int a,b,len,i;
	char n[50]={"0"},answer[50]={"0"};	
	long Dn;				

	scanf("%d%s%d",&a,n,&b);		

	for (i=0;i<=strlen(n)-1;i++)		
		n[i]=toupper(n[i]);		
	Dn=toDex(a,n);				
	len=toB(Dn,b,answer);			

	for (i=len-1;i>=0;i--)
		printf("%c",answer[i]);	
	
}

long toDex(int a,char n[])
{
	int i,j;
	long Dn=0,sqr;	

	for (i=0;i<strlen(n);i++)
	{
		sqr=1;			
		for (j=0;j<strlen(n)-i-1;j++)
			sqr*=a;			
		if ((int)(n[i])>=65) Dn+=sqr*((int)(n[i])-55);
		else Dn+=sqr*((int)(n[i])-48);			
	}

	return Dn;
}

int toB(long Dn,int b,char answer[])
{
	long shang=Dn;						
	int i=0,yu;			

	do										
	{	
		yu=shang%b;							
		(yu>=10)?(answer[i]=(char)(yu)+55):(answer[i]=(char)(yu)+48);	
		i++;								
		shang=shang/b;							
	}while (shang!=0);							

	return i;
}
