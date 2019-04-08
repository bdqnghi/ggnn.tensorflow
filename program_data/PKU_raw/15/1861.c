int main()
{
 int n,i,j,e,f,x,y,p,s[1000][1000];
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
		 scanf("%d",&s[i][j]);
	 }
 }
 for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
		 if(s[i][j]==0){
			 e=i;
			 f=j;
			 break;
		 }
		 }
if (j<n) {
            break;
        }
	 }
 for(i=n-1;i>=0;i--){
    for(j=n-1;j>=0;j--){
		 if(s[i][j]==0){
			 x=i;
			 y=j;
			 break;
		 }
		 }
if (j>=0) {
            break;
        }
	 }
p=(x-e-1)*(y-f-1);
printf("%d",p);
	return 0;
}

