int main()
{
	int i,j,m,n,a[100][100]; 
	int shang,xia,zuo,you;
	scanf("%d %d",&m,&n);

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
		shang=0;
		zuo=0;
		xia=m-1;
		you=n-1;
	while(zuo<=you&&(shang<=xia)){
		if(zuo!=you&&shang!=xia){
		
			for(i=shang,j=zuo;j<=you;j++){
				printf("%d\n",a[i][j]);
			}
			for(j=you,i=shang+1;i<=xia;i++){
				printf("%d\n",a[i][j]);
			}
			for(i=xia,j=you-1;j>=zuo;j--){
				printf("%d\n",a[i][j]);
			}
			for(i=xia-1,j=zuo;i>shang;i--){
				printf("%d\n",a[i][j]);
			}
		}
		else if(zuo==you&&shang!=xia){
			for(j=zuo,i=shang;i<=xia;i++){
				printf("%d\n",a[i][j]);
			}
		}
		else if(shang==xia&&zuo!=you){
			for(i=shang,j=zuo;j<=you;j++){
				printf("%d\n",a[i][j]);
			}
		}
		else if(shang==xia&&zuo==you){
			i=shang;j=zuo;
			printf("%d\n",a[i][j]);
		}
		zuo++,shang++,you--,xia--;

			
	}
	

	return 0;
}

