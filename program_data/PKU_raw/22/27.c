void main()
{
	int max,sec=-1,temp;
	scanf("%d",&temp);
	getchar();
	max=temp;
	while(scanf("%d",&temp)!=EOF)
	{
		getchar();
		//if(temp==0) break;
		if(temp>max)
		{
			sec=max;
			max=temp;
			continue;
		}
		else if(temp<max && temp>=sec) sec=temp;
	}
	if(sec==max || sec==-1) printf("No\n");
	else printf("%d\n",sec);

	
}