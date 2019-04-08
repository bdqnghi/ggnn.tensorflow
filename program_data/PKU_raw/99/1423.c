int main()
{
	int n,i,age[100],j;
	double b[4],c[4];
	scanf("%d\n", &n);
	b[0]=b[1]=b[2]=b[3]=0;
	for(i=0;i<n;i++){
		scanf("%d", &age[i]);
		if(age[i]<=18){
			b[0]++;
		}
		if(age[i]<=35&&age[i]>=19){
			b[1]++;
		}
		if(age[i]<=60&&age[i]>=36){
			b[2]++;
		}
		if(age[i]>=61){
			b[3]++;
		}
	}
    for(j=0;j<4;j++){
		c[j]=100.0*b[j]/n;
	}
	printf("1-18: %.2lf%%\n", c[0]);
    printf("19-35: %.2lf%%\n", c[1]);
	printf("36-60: %.2lf%%\n", c[2]);
	printf("60??: %.2lf%%\n", c[3]);
	return 0;
}