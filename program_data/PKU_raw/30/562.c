int main()
{
	int b=1,c=0,m,n;
	int a=0;
	scanf("%d",&m);
while(b<m||b==m){
	if(b%7==0||b%10==7||b/10==7){
	a=a+b*b;
	} 
	c=c+b*b;
b++;
}
n=c-a;
printf("%d",n);
return 0;
}
