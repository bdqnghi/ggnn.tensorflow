int main()
{
    int n,i,j,t=0,max=0;
	int a[100][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&(a[i][j]));
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90){
			t++;
			if(max<t){
				max=t;
			}
		}
		else{
			t=0;
		}
	}

	printf("%d",max);
	return 0;
}