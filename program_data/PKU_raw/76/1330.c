//??????????????????????


int getMin(int ai[], int ais[])//?????
{
    int i, min = 0;
    for (i = 1; i < 10 && ai[i] != -1; i++) {
		if (ai[i] < ai[min])
			min = i;
	}
	ais[min] = 0;
	return min;
}
int getMax(int bi[])//?????
{
	int i, max = 0;
	for (i = 1; i < 10 && bi[i] != -1; i++) {
		if (bi[i] > bi[max])
			max = i;
	}
	return max;
}
int hasEqual(int a, int ai[], int ais[]) {
	int i;
	for (i = 0; i < 10; i++) {
		if (ai[i] <= a && ais[i] == 1) {
			ais[i] = 0;
			return i;
		}
	}
	return -1;
}
int main() {
	int ai[10], bi[10];
	int aischeck[10];
	int n = 0, i, temp;
	for (i = 0; i < 10; i++)//???
	{
		ai[i] = -1;
		bi[i] = -1;
		aischeck[i] = 1;//?????????????????
	}
	int mi, ma, min, max;
	scanf("%d", &n);
    
	for (i = 0; i < n; i++) {
		scanf("%d%d", &ai[i], &bi[i]);
	}
    
	mi = min = getMin(ai, aischeck);
	ma = max = getMax(bi);
	temp = hasEqual(bi[min], ai, aischeck);
    
	while (temp != -1)//????
	{
		temp = hasEqual(bi[temp], ai, aischeck);//????????????????????????????????????????????????
		if (bi[temp] == bi[ma]) {
			printf("\n%d %d", ai[mi], bi[ma]);
			return 0;
		}
	}
	printf("no\n");
}


/*
int main(){
    int n,min,max;
    int add=0;
    int a[100000];
    int b[100000];
    int sz[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
   // printf("%d%d\n",a[i],b[i]);    
}
    for(int i=0;i<n;i++){
        if(i==0)min=a[i];
        else if(i!=0&&a[i]<min)
            min=a[i];
            
    }
    for(int i=0;i<n;i++){
        if(i==0)max=b[i];
        else if(i!=0&&b[i]>max)
            max=b[i];
            
    }
    for(int i=min;i<=max;i++){
        sz[i]=1;
    }
    for(int i=0;i<n;i++){
    for(int j=a[i]+0.5;j<=b[i];j++){
        sz[j]=0;
    }
    }
    for(int i=min;i<=max;i++){
        add=add+sz[i];
    }
    if(add>0)printf("no");
    else printf("%d %d",min,max);
}




*/

