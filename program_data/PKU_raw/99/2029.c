int main()
{
	int n,score[100],i;
	double d18=0,d35=0,d60=0,up=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&score[i]);
		if(score[i]>60)
			up++;
		else if(score[i]<=60&&score[i]>=36)
			d60++;
		else if(score[i]<=35&&score[i]>=19)
			d35++;
		else if(score[i]<=18)
			d18++;
		
	}

	printf("1-18: %.2f%%\n",(double)d18/n*100);
	printf("19-35: %.2f%%\n",(double)d35/n*100);
	printf("36-60: %.2f%%\n",(double)d60/n*100);
	printf("60??: %.2f%%\n",(double)up/n*100);


	return 0;
}
