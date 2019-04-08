void main()
{
	int a,m,p,j;
	char t='n';
	m=3;p=5;j=7;
	scanf("%d",&a);
	if(a%3==0 && a%5==0 && a%7==0) printf("%d %d %d",m,p,j);
	else if(a%3!=0 && a%5!=0 && a%7!=0)  printf("%c",t);
	else if(a%3==0 && a%5==0 && a%7!=0) printf("%d %d",m,p);
	else if(a%3==0 && a%5!=0 && a%7==0) printf("%d %d",m,j);
	else if(a%3!=0 && a%5==0 && a%7==0) printf("%d %d",p,j);
	else if(a%3==0) printf("%d",m);
	else if(a%5==0) printf("%d",p);
	else if(a%7==0) printf("%d",j);printf("\n");
}
