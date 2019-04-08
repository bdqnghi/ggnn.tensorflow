int main(){
int n,j,i,a1,a2,b1,b2,t,x;
int s[100][100];
scanf("%d",&n);
for(j=0;j<n;j++){
	     for( i=0;i<n;i++){
           scanf("%d",&s[j][i]);
		 }
}
for(x=0,j=0;j<n;j++){
		for( i=0;i<n;i++){
		      if(s[j][i]==0){
				a1=j;
				x++;
				break;
			  }
		}
		if(x!=0){
			break;}
}
   for(x=0,j=(n-1);j>=0;j--){
		for( i=0;i<n;i++){
			if(s[j][i]==0){
				a2=j;
				x++;
				break;
			}
		}
		if(x!=0){
			break;}
	}
   for(x=0,i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(s[j][i]==0){
				b1=i;
				x++;
				break;
			}
		}
		if(x!=0){
			break;}
   }
  for(x=0,i=(n-1);i>=0;i--){
		for( j=0;j<n;j++){
			if(s[j][i]==0){
				b2=i;
				x++;
				break;
			}
		}
		if(x!=0){
			break;}
	}
   t=(a2-a1-1)*(b2-b1-1);
  printf("%d\n",t);
	return 0;
}