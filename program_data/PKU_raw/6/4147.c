int main(){
int n,s,r,l;
int sz[100][100];
s=0;
scanf("%d",&n);
for (int i=0;i<n;i++){
	scanf("%d",&r);
	scanf("%d",&l);
	for(int j=0;j<r;j++){
		for(int k=0;k<l;k++){
			scanf("%d",&(sz[j][k]));
			if((j==0)||(j==r-1)||((j!=0)&&(k==0))||((j!=0)&&(k==l-1))){
				s=s+sz[j][k];

}}}printf ("%d\n",s);
   s=0;
}
	return 0;
}
