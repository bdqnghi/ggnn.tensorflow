int main(){
	 char a[200][200];
	 int f,i,j,t,q,sum=0;
	 scanf("%d",&f);
	 for(i=1;i<=f;i++){
			 scanf("%s",a[i]);
	 }
	 scanf("%d",&t);
	 for(q=1;q<t;q++){
		 for(i=1;i<=f;i++){
		    for(j=0;j<f;j++){
				if(a[i][j]=='@'){
               if(a[i-1][j]!='#'&&a[i-1][j]!='@')a[i-1][j]='!';
			   if(a[i+1][j]!='#'&&a[i+1][j]!='@')a[i+1][j]='!';
			   if(a[i][j+1]!='#'&&a[i][j+1]!='@')a[i][j+1]='!';
			   if(j-1>=0){
			   if(a[i][j-1]!='#'&&a[i][j-1]!='@')a[i][j-1]='!';
			   }
				}
			}
		 }
		 for(i=1;i<=f;i++){
		    for(j=0;j<f;j++){
				if(a[i][j]=='!')a[i][j]='@';
			}
		 }
	 }
	 for(i=1;i<=f;i++){
		 for(j=0;j<f;j++){
			 if(a[i][j]=='@')sum++;
		 }
	 }
	 printf("%d",sum);
	return 0;
}