int j(int x);
int main()
{
int b[12],w,i,a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
scanf("%d",&w);
for(i=0;i<12;i++)
{
	b[i]=a[i]%7-1;
	b[i]=(b[i]+w)%7;
}
for(i=0;i<12;i++)
{
	if(b[i]==5)
	{
		printf("%d\n",i+1);
	}
}
return 0;
}
