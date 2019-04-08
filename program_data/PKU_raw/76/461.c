int main()
{
	int n,i;
	int a[50000][2];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
    int t;
	for(int k=1;k<=n;k++){
			for(int x=0;x<n-k;x++){
				if(a[x][0]>a[x+1][0]){
					t=a[x][0];
					a[x][0]=a[x+1][0];
					a[x+1][0]=t;
					
					t=a[x][1];
					a[x][1]=a[x+1][1];
					a[x+1][1]=t;

				}
			}
	}
int bi=0;
int max=a[0][1];
for(i=1;i<n;i++){
	if(a[i][0]>max){
		printf("no");
        bi=1;
		break;
	}else{
		if(a[i][1]>max)
			max=a[i][1];
	}
}
if(bi==0)
    printf("%d %d",a[0][0],max);
return 0;
}

