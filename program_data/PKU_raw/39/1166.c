
int main()
{
    int i,n,zong=0,max;
	int a[100],b[100],r[100];
    char name[100][21],s[100],t[100],temp[20];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %d %d %c %c %d",&name[i],&a[i],&b[i],&s[i],&t[i],&r[i]);
	}
    	int sum[100]={0};
	for(i=0;i<n;i++){
		if((a[i]>80)&&(r[i]>=1)){
			sum[i]+=8000;
		}
	    if((a[i]>85)&&(b[i]>80)){
			sum[i]+=4000;
		}
		if(a[i]>90){
			sum[i]+=2000;
		}
		if((a[i]>85)&&(t[i]=='Y')){
			sum[i]+=1000;
		}
	    if((b[i]>80)&&(s[i]=='Y')){
			sum[i]+=850;
		}
	}
	max=sum[0];
	for(i=0;i<n;i++){
		if(sum[i]>max){
			max=sum[i];
			strcpy(temp,name[i]);
		}
	}
	for(i=0;i<n;i++){
		zong+=sum[i];
	}
	printf("%s\n",temp);
	printf("%d\n",max);
	printf("%d\n",zong);
	return 0;
}