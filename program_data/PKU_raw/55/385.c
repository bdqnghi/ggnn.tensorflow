void main()
{
char A[200],B[200];
int a,b,i=0,m=0;
long int n=0,k=0;

scanf("%d%s%d",&a,A,&b);

while (A[i]!='\0')
{
	n=n*a;
	if(A[i]<=60) n=n+A[i]-48;
	else if(A[i]<=90) n=n+A[i]-55;
	else  n=n+A[i]-87;
	i++;
}

k=n;
i=0;
if(k==0) printf("%ld",k);


while (n>0)
{
	m=n%b;
	if(m<=9) B[i]=m+48;
	else if(m>=10) B[i]=m+55;
	n=n/b;
	i++;
}

B[i]='\0';
m=strlen(B);
n=k;
i=m-1;

while (i>=0)
{
	m=n%b;
	if(m<=9) B[i]=m+48;
	else if(m>=10) B[i]=m+55;
	n=n/b;
	i--;
}

printf("%s\n",B);


}