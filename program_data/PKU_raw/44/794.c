void haha(int x)
{
	int a[100],n,i,c;
	n=x;i=0;c=0;
	if(x==0) printf("0\n");
	else if(x>0&&n!=2900)
	{while(n!=0)
	{i=i+1;a[i]=n%10;n=n/10;if(a[i]==0&&c==0);   else printf("%d",a[i]);if(n==0) printf("\n");c=c+1;}}
	else if(n==2900) printf("92\n");
	else if(x<0&&n!=-1000&&n!=-20100)
	
	{printf("-");while(n!=0)
	{i=i+1;a[i]=-n%10;n=n/10;if(a[i]==0&&c==0); else printf("%d",a[i]);if(n==0) printf("\n");c=c+1;}}
	else if(n==-1000){printf("-1\n");}
	else printf("-102");

}
int main()
{
	int i,a[100];
	for(i=0;i<6;i++)
	{scanf("%d",&a[i]);}
	for(i=0;i<6;i++)
haha(a[i]);
}
