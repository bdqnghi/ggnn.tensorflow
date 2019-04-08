

nixu(int n)
{
int m;
m=n%10;
	printf("%d",m); 
	m=n/10;
if (m<1) ;
else m=nixu(m);
	return m;	
}

void main()
{
int n;

scanf("%d",&n);

nixu(n);

}