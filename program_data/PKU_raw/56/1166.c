int main()
{
int a,b,c,s=0;
scanf("%d",&a);
c=a%10000;
b=a/10000;
s=s+b;


b=c/1000;
c=c%1000;


s=s+b*10;

b=c/100;
c=c%100;
s=s+b*100;

b=c/10;
c=c%10;

s=s+b*1000;

s=s+c*10000;

for(c=0;c<4;c++){
	if(s%10==0)
		s=s/10;}
printf("%d",s);
return 0;
}
