
int main()
{
	int n,i,x,t=0;
	int a[1000]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {scanf("%d",&x);
	    a[x]++;
	   }
	for(i=1;i<=1000;i++)
		if(a[i]!=0&&i%2!=0&&t==0){t++;printf("%d",i);}
		else if(a[i]!=0&&i%2!=0)printf(",%d",i);
	//getchar();
	//getchar();
    return 0;
}
