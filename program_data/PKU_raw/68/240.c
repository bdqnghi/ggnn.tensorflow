int prime(int p);
int main(){
	int n,k,i;
	scanf("%d",&n);
	for (i=6;i<=n;i+=2)
	{
		for(k=3;k<=(n/2);k+=2)
		{
			if (prime(k)+prime(i-k)==2)
			{
			printf("%d=%d+%d\n",i,k,i-k);
			break;
			}
		}
	}
return 0;
}

int prime(int n){
	int i;
	float q;
	
	if (n==2)
	{
		return 1;}
	else 
	{
		q=(float)sqrt(n);
		for (i=2;i<=q;i++)
		{
			if(n%i==0) break;
		   
		}
		  if(i>q) return 1;
		  else return 0;
	  }
	
}