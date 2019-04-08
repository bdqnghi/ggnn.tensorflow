

int main(int argc, char* argv[])
{
	int i,sum,n;
	scanf("%d",&n);
        sum=0;
	for(i=1;i<n+1;i++)
		if( i%7==0)
			continue;
		else if(i%10==7)
			continue;
		else if(i/10==7)
			continue;
		else{
			sum=sum+i*i;
		}
		
		
		
	printf("%d",sum);
	return 0;
}