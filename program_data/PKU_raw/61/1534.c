int feibo(int n);
int main()
{
int i,n,c,result[1000];
scanf("%d",&c);
for(i=1;i<=c;i++){
	scanf("%d",&n);
	result[i]=feibo(n);
}
for(i=1;i<=c;i++){
	printf("%d\n",result[i]);
}
return 0;
}


int feibo(int n)
{
int a=0;
int b=0;
int result=1;
int i;
for(i=1;i<=n-1;i++){
	a=result;
	result=result+b;
	b=a;
}
return result;
}