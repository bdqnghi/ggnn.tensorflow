int main()
{
	int a[16]={0},b[16]={0},c[100]={0},i,n,j,k,l,num;
	l=0;
	for(j=0;j<100;j++){
		n=0;
		for(i=0;i<16;i++){
			scanf("%d",&a[i]);
			if(a[i]==-1){
				break;
			}
			if(a[i]==0){
				break;
			}
			n++;
		}
		num=0;
		for(i=0;i<n;i++){
			b[i]=a[i];
			for(k=0;k<n;k++){
				if(b[i]==2*a[k]){
					num++;
				}
			}
		}
		c[j]=num;
		l++;
		if(a[0]==-1){
			break;
		}
	}
	for(j=0;j<l-1;j++){
		printf("%d\n",c[j]);
	}
	return 0;
}
