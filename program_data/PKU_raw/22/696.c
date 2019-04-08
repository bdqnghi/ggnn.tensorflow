void main(){
	int a[300];
	int max,min,i;
	max=-1;
	min=-1;
	char c;
	i=0;
	while(i<=300)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			min=max;
			max=a[i];
		}
		if(a[i]>min&&a[i]<max)
		{
			min=a[i];
		}
		i=i+1;
		if(getchar()!=',')
		break;
	}
	if(min==-1) printf("No");
	else printf("%d",min);
}