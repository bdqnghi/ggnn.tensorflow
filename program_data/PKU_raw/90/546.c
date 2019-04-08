int apple(int a,int b)//a??b??//
{
	int z;
	if(b==1||a==0) z=1;
	else if(b>a) z=apple(a,a);
	else z=apple(a,b-1)+apple(a-b,b);
	return z;
}
void main()
{
	int m[20],n[20],s,i;
	scanf("%d",&s);
	for(i=0;i<s;i++)
		scanf("%d%d",&m[i],&n[i]);
	for(i=0;i<s;i++)
		printf("%d\n",apple(m[i],n[i]));
}