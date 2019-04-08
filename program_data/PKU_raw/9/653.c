main()
{
	int n,i,j,k,temp,s,max;
         int is_over_sixty_exist=1;
	int age[100]={0},queue[100]={0};
	char id[100][10]={'0'};
	scanf("%d",&n);
	for (i=0;i<n;i++){
		queue[i]=i;
		scanf("%s%d",id[i],&age[i]);
	}
	i=0;
	while (is_over_sixty_exist){
		max=0;
		is_over_sixty_exist=0;
		temp=queue[i];
		for (j=0;j<n;j++){
			if (age[j]>=60&&age[j]>max){
				is_over_sixty_exist=1;
				max=age[j];
				queue[i]=j;
			}
		}
		for (s=i+1;s<n;s++)
			if (queue[s]==queue[i])
				break;
		age[queue[i]]=0;
		if (is_over_sixty_exist){
			if (s!=n){
				for (k=s;k>=i+1;k--)
					queue[k]=queue[k-1];
				queue[i+1]=temp;
			}
		}
		i++;
	}
	for (i=0;i<n;i++)
		printf("%s\n",id[queue[i]]);
}
