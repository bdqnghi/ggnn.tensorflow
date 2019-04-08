int main()
{int n,a,c;
scanf("%d",&n);
int i=1;
int s=0;
while(i<=n){
a=i%10;
c=i%7;
int b=(int)(i/10);
if((a!=7)&&(b!=7)&&(c!=0)){
	s=s+i*i;}
i++;}
printf("%d",s);
return 0;
}