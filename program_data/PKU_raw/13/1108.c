int main()
{long i,n,x;
 int a[100]={0};
 scanf("%d",&n);
 scanf("%d",&x);
 printf("%d",x);
 a[x]=1;
 for(i=2;i<=n;i++)
    {scanf("%d",&x);
     if(a[x]==0){
     printf(" %d",x);a[x]=1;}
	 }
 return 0;
}

