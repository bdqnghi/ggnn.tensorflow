int main()
{
    int n,i,t,max;
	int ss[100];
	int sz[100];
	int time[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d/n",&ss[i],&sz[i]);
	}
	t=0;
    for(i=0;i<n;i++){
		if(ss[i]>=90&&ss[i]<=140&&sz[i]<=90&&sz[i]>=60){t++;time[i]=t;}
		else{t=0;}
	}
	max=0;
    for(i=0;i<n;i++){
		if(max<time[i]){max=time[i];}
	}
	printf("%d",max);
	return 0;

}
