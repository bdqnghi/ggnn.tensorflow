int main()
{
	int n,i,age[N];
	scanf("%d",&n);
	int a=0,b=0,c=0,d=0;
	double result;
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
		if(age[i]<=18)
			a+=1;
		else if(age[i]<=35)
			b+=1;
		else if(age[i]<=60)
			c+=1;
		else d+=1;
	}
	result=a*1.0/n*100;
	printf("1-18: %.2f%%\n",result);
	result=b*1.0/n*100;
	printf("19-35: %.2f%%\n",result);
	result=c*1.0/n*100;
	printf("36-60: %.2f%%\n",result);
	result=d*1.0/n*100;
	printf("60??: %.2f%%\n",result);
	return 0;
}

		