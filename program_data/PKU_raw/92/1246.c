int tj[1001],qw[1001];
void main()
{
	int game(int n,int money);
	int n,i,j,k,temp;
	scanf("%d",&n);
	while(n!=0)	
	{for(i=1;i<=n;i++)
     scanf("%d",&tj[i]);
	for(i=1;i<=n;i++)
     scanf("%d",&qw[i]);
	for(i=1;i<=n;i++)
	for(j=i+1;j<=n;j++)
	{
		if(tj[i]<tj[j]) {temp=tj[i];tj[i]=tj[j];tj[j]=temp;}
		if(qw[i]<qw[j]) {temp=qw[i];qw[i]=qw[j];qw[j]=temp;}
	}
	k=game(n,0);
	printf("%d\n",k);
	scanf("%d",&n);}
}
int game(int n, int money)
{
	int i;
    if(n==0) return money;
	else{
		if(tj[n]>qw[n]) money=money+200;
		else if(tj[n]<qw[n]) 
		{money=money-200;
		for(i=1;i<n;i++) qw[i]=qw[i+1];
		}
		else
		{
			if(n!=1)	{
			if(tj[1]<qw[1]) {money=money-200; for(i=1;i<n;i++) qw[i]=qw[i+1];}
           else if(tj[1]==qw[1]&&tj[1]>tj[n]) {money=money-200; for(i=1;i<n;i++) qw[i]=qw[i+1];}
		   else if(tj[1]>qw[1]) {money=money+200;for(i=1;i<n;i++) {tj[i]=tj[i+1];qw[i]=qw[i+1];}}
			}
		}
		n--;
return	game(n,money);
	}
}