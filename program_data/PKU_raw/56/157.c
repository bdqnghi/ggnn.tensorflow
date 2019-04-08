int main(){
	int x,i;
	int n;
	n=0;
	int e[6];
	int s[10];
	scanf("%d",&x);
    s[0]=x;
	while(x>9){
		
		x=x/10;

		n++;
	}
	
	for(i=0;i<=n;i++)
	{
		e[i]=(int)s[i]/pow(10,n-i);

        s[i+1]=s[i]-e[i]*pow(10,n-i);
	}
	for(i=n;i>=0;i--)
	{
		printf("%d",e[i]);
	}
	return 0;
}

