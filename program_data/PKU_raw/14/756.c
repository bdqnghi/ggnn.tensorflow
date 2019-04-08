
int main()
{
	int n,i;
	int sum[100000];
	int max1,max2,max3;
	int x=0;
	scanf("%d",&n);
	struct {
		int number;
		int chin;
		int math;
	}student[100000];
	for(i=0;i<n;i++){
		scanf("%d%d%d",&student[i].number,&student[i].chin,&student[i].math);
		sum[i]=student[i].chin+student[i].math;}
	max1=sum[0];
	max2=sum[0];
	max3=sum[0];
	for(i=0;i<n;i++){
		if(sum[i]>max1)
			max1=sum[i];}
	for(i=0;i<n;i++){
		if(sum[i]==max1){
			printf("%d %d\n",student[i].number,sum[i]);
			x++;}
		if(x>=3)
			break;
	}
	for(i=0;i<n;i++){
		if((sum[i]>max2)&&(sum[i]!=max1))
			max2=sum[i];}
	for(i=0;i<n;i++){
		if(x>=3)
			break;
		if(sum[i]==max2){
			printf("%d %d\n",student[i].number,sum[i]);
			x++;}
	}
	for(i=0;i<n;i++){
		if((sum[i]>max3)&&(sum[i]!=max1)&&(sum[i]!=max2))
			max3=sum[i];}
	for(i=0;i<n;i++){
		if(x>=3)
			break;
		if(sum[i]==max3){
			printf("%d %d",student[i].number,sum[i]);
		x++;}
	}
	return 0;
}
