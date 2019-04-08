int main()
{
	int a[9][9]={0};
	int n,m,i,j,k,l,flag1,flag2,flag3=0;
	scanf("%d,%d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			k=l=1;
			flag1=flag2=1;
			do{
				if(a[i][j]<a[i][k]){flag1=0;break;}
				k++;
			}while(k<=m);
			do{
				if(a[i][j]>a[l][j]){flag2=0;break;}
				l++;
			}while(l<=n);
			if(flag1==1&&flag2==1){
				printf("%d+%d",i-1,j-1);
				flag3=1;
				return 0;
			}
		}
	}
	if(flag3==0)printf("No");






  return 0;
}
