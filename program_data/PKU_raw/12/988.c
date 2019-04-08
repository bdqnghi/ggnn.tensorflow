int main()
{
	int a[16],i,j,m,n,t;
	while(a[0]!=-1){
		t=0;n=0;
		for(i=0;;i++){
			scanf("%d",&a[i]);
			if(a[i]<=0){
				break;
			}
			else{
				t++;
			}
		}
		if(a[0]==-1){
			break;
		}
		else{
		for(j=0;j<t;j++){
			for(m=0;m<t;m++){
				if(a[j]==2*a[m]){
					n++;
					}
				}
			}
			printf("%d\n",n);
		}
	}
	return 0;
}
