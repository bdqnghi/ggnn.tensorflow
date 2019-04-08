
int main()
{
	int sc[300],ao[16];
	int i,j,k,l,n,b,x,m;
	i=0;j=0;k=0;l=0,x=0;
	do{
		n=1;
	    for(i=0;i<16;i++){
		scanf("%d",&ao[i]);
		if(ao[i]==0||ao[i]==-1){
			n=i;
			break;
		}
	}
	i=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(ao[i]*2==ao[j]){
				 k++;
			}
		}
	}
    sc[l]=k;
	k=0;
	l++;
	}
	while(n!=0);
	for(x=0;x<l-1;x++){
		printf("%d\n",sc[x]);
	}
	return 0;
}