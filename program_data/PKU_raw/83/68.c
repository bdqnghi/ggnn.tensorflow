int main(int argc, char* argv[])
{
	int n,i,xuefen[10],chengji[10],sum1=0;
    scanf("%d",&n);
	for(i=0;i<n;i++){
	     scanf("%d",&xuefen[i]);
		 sum1=sum1+xuefen[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&chengji[i]);
	}
	float jidian[10];
	for(i=0;i<n;i++){
	if(chengji[i]<=100&&chengji[i]>=90) jidian[i]=4.0;
	if(chengji[i]<=89&&chengji[i]>=85) jidian[i]=3.7;
	if(chengji[i]<=84&&chengji[i]>=82) jidian[i]=3.3;
	if(chengji[i]<=81&&chengji[i]>=78) jidian[i]=3.0;
    if(chengji[i]<=77&&chengji[i]>=75) jidian[i]=2.7;
    if(chengji[i]<=74&&chengji[i]>=72) jidian[i]=2.3;
	if(chengji[i]<=71&&chengji[i]>=68) jidian[i]=2.0;
    if(chengji[i]<=67&&chengji[i]>=64) jidian[i]=1.5;
    if(chengji[i]<=63&&chengji[i]>=60) jidian[i]=1.0;
    if(chengji[i]<=59) jidian[i]=0;
	}
	float xuefenjidian[10],sum2=0;
	int j;
	for(j=0;j<i;j++){
		xuefenjidian[j]=jidian[j]*xuefen[j];
		sum2=sum2+xuefenjidian[j];
	}
	float GPA;
	GPA=sum2/sum1;
	printf("%.2f",GPA);
     return 0;
}

