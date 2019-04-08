int main(){
	int n,i,a,b,k=0;
	char s[8];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a==0)
		{
			if(b==1)
			{
				k++;
			}
			if(b==2)
			{
				k--;
			}
		}
		if(a==1)
		{
			if(b==0)
			{
				k--;
			}
			if(b==2)
			{
				k++;
			}
		}
		if(a==2)
		{
			if(b==0)
			{
				k++;
			}
			if(b==1)
			{
				k--;
			}
		}
	}
	if(k>0)
	{
		printf("A");
	}
	else if(k==0)
	{
		printf("Tie");
	}
	else if(k<0)
	{
		printf("B");
	}
	return 0;
}