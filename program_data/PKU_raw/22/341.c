void main()
{
	int i=1,max,sec=0,j,s=0;
	int a[301];
	char c;
	scanf("%d",&a[i]);
	for (;(c=getchar())==',';){
		i++;
		scanf("%d",&a[i]);}
	if (i==1)
		printf("No\n");
	else {
		for (j=1;j<=i;j++)
			if (a[j]==a[1])
				s++;
		if (s==i)
			printf("No\n");
		else {
	max=a[1];
	for (j=1;j<=i;j++)
		if (a[j]>max)
			max=a[j];
	for (j=1;j<=i;j++)
		if (a[j]==max)
			a[j]=0;
	for (j=1;j<=i;j++)
		if (a[j]>sec)
			sec=a[j];
	printf("%d\n",sec);
		}
     }
}