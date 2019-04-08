int main()
{
	float a[100];
	int i,j,t;
	do{
		t=0;
	for(i=0;i<=99;i++)
	{
		scanf("%f",&a[i]);
		if(i>=1)
		{
			if(a[i]==0)
				break;
		
		for(j=0;j<=i-1;j++)
		{
			if((a[i]==2*a[j])||(a[i]==a[j]/2))
				t=t+1;
		}
		}

	}
	if(a[0]!=-1)
	printf("%d\n",t);
	}while(a[0]!=-1);
	return 0;
}
