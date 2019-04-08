int main()
{
int i,n,a,b,c,d;
scanf("%d",&n);
scanf("%d",&a);
b=a;
d=a;
for(i=1;i<n;i++)
{
	scanf("%d",&a);
	if(a>b){b=a;}
	else{
		if(a>d){d=a;}
	}
}

printf("%d\n%d",b,d);
return 0;
}