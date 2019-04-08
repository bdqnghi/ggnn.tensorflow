int main()
{
	int n;
	int number[120];
	scanf("%d",&n);
	int i,maxpos;
	
	for (i=0;i<n;i++)
		scanf("%d",&number[i]);
	int max=-100000, sndmax=-100000;
	for (i=0;i<n;i++) {
		if (number[i]>max) {
			max=number[i];
			maxpos=i;
		}
	}
	for (i=0;i<n;i++) {
		if (i==maxpos)
			continue;
		if (number[i]>sndmax)
			sndmax=number[i];
	}
	printf("%d\n%d\n",max,sndmax);
	return 0;
}
