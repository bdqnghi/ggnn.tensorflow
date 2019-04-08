
int main(){
int a,b,c,d,e,f;
int sum1,sum2;
while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f),(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)!=1)
{
	sum1=a*3600+b*60+c;
	sum2=(d+12)*3600+e*60+f;
	printf("%d\n",sum2-sum1);
}  

return 0;
}
