int main()
{
	int b,i,c,d,n,e,j,k,m,a[10][10];
	m=1;
	e=1;
	for(i=1;i<=5;i++){
		for(k=1;k<=5;k++){
		scanf("%d",&a[i][k]);
		}
	}
	i=1;
	for(i=1;i<=5;i++){
		k=1;
		for(k=1;k<=5;k++){
			j=1;
			m=1;	
			for(j=1;j<=5;j++){
					if(a[i][k]<a[i][j])m=0;		
				}
				if(m==1){
					j=1;
					for(j=1;j<=5;j++){
						if(a[i][k]>a[j][k])m=0;
					}
					if(m==1){
						printf("%d %d %d\n",i,k,a[i][k]);
					e=0;}
				}
		}
	}
	if(e==1)printf("not found");

	return 0;
}
