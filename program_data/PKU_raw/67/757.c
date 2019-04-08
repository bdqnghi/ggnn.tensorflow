int main(int argc, char* argv[])
{
	int n,i,num[N+1],right[N+1];
	float k[N+1];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&num[i],&right[i]);
		k[i]=(float)right[i]/num[i]*100;

	}
	for(i=1;i<n;i++)
	{
		if(k[0]-k[i]>5)
			printf("worse\n");
		else if(k[i]-k[0]>5)
			printf("better\n");
		else 
			printf("same\n");
	}


	return 0;
}
