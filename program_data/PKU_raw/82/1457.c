int main(){
   int n,i,j,y=0,max=0;
   int a[150],b[150],s[150];
   scanf("%d",&n);
   for(i=0;i<n;i++){
	   scanf("%d %d",&a[i],&b[i]); }
  
   int x[150];
   for(i=0;i<150;i++) {x[i]=0; s[i]=0;}
   
   for(i=0;i<n;i++){
	   if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) x[i]=1;}
	  
   
   for(i=0;i<n;i++){ if(x[i]==1) max=1;}
   

    
 for(i=0;i<n;i++){
	 if(x[i]==1&&(x[i+1]==1||i==n-1)) s[y]++;
	 else if(i!=1&&i!=n-1&&x[i]==1&&x[i-1]==1&&x[i+1]==0) s[y]++;
	 else y++;}

int js[150];
   
for(i=0;i<n;i++){
	
        if(s[i]>max) max=s[i];}


   printf("%d",max);


	return 0;
}


