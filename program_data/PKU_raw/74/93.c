int su(int a)
{
	int i,z=1;
	for(i=2;i<a;i++)if(a%i==0)z=0;
	return z;
}

int hui(int a)
{
	int temp,b=0;
	temp=a;
	while(temp){b=b*10+temp%10;temp=temp/10;}
	if(a==b) return 1;
	else return 0;
}

void main()
{
	int m,n;scanf("%d %d",&m,&n);
	int i,l=0,a[100],*x=a;
	//i=hui(12321);
	for(i=m;i<=n;i++)
		{if(su(i)*hui(i)==1){l++;*x=i;x++;}
		 else;}
	if(x-a==0)printf("no");
	else{
		printf("%d",a[0]);
	for(i=1;i<l;i++)printf(",%d",a[i]);
}}
