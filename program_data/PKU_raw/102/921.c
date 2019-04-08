int main(){
	int n,i,j=0,k;
	int a1,b1;
	char an[40][7],x;
	x=' ';
	float bn[40],dn[40],max1=0,max2=0;
	scanf("%d",&n);
	k=n-1;
	for(i=0;i<n;i++)
		scanf("%s%f",an[i],&bn[i]);
	for(i=0;i<n;i++){
		if(strcmp(an[i],"male\0")==0){
			dn[j]=bn[i];
			j+=1;
		}
		if(strcmp(an[i],"female\0")==0){
			dn[k]=bn[i];
			k-=1;
		}
	}
	for(i=j-1;i>=0;i--){
		for(a1=0;a1<i;a1++){
			if(dn[a1]>dn[a1+1]){
				max1=dn[a1];
				dn[a1]=dn[a1+1];
				dn[a1+1]=max1;
			}
		}
	}
	for(i=k+1;i<=n-1;i++){
		for(b1=n-1;b1>i;b1--){
			if(dn[b1]>dn[b1-1]){
				max2=dn[b1];
				dn[b1]=dn[b1-1];
				dn[b1-1]=max2;
			}
		}
	}
	printf("%.2f",dn[0]);
	for(i=1;i<n;i++)
		printf("%c%.2f",x,dn[i]);
	return 0;
}
