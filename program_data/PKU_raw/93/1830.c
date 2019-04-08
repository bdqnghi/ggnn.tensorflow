int main()
{
	int a,i=0,j=0;
	scanf("%d",&a);
	if(a%3==0) {printf("3"); i++;}
	if(a%5==0) { if(i==1) printf(" "); printf("5");j=10;}
	if(a%7==0) { if(i>0&&j!=10) printf(" "); if(j==10) printf(" ");printf("7");}
	if(a%3!=0&&a%5!=0&&a%7!=0) printf("n");
	return 0;
}