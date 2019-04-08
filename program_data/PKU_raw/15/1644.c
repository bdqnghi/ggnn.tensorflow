int main()
{
    int a[MAX][MAX];
    int n, i, j, k,h,t=0,s=0,e=0; 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=1;j+k<n;k++){
                if(a[i][j+k]==0){
					t+=1;
				}
			}
			for(h=1;j-h>=0;h++){
				if(a[i][j-h]==0){
					s+=1;
				}
			}
			if(t==1&&s==1){
				e++;
			}
			t=0;
			s=0;
		}
	}
	printf("%d",e);
    return 0;
}