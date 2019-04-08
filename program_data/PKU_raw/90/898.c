/* Note:Your choice is C IDE */
int f(int m,int n)
{
	int z;
	if(m==0||m==1||n==1) z=1;
	else{
		if(m<n) z=f(m,m);
		else z=f(m,n-1)+f(m-n,n);
	}
	return z;
}


int main()
{
    int f(int m,int n);
    int x,i,m[10],n[10];
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    	scanf("%d%d",&m[i],&n[i]);
    	
    }
    for(i=1;i<=x;i++)
    {
    	printf("%d\n",f(m[i],n[i]));
    }
    return 0;
}