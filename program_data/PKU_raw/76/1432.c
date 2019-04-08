int main(){
 int n,i,min,max,p=0,s=0;
 double x;
 scanf("%d",&n);
 int a[50000],b[50000];
 for(i=0;i<n;i++){
	 scanf("%d %d",&(a[i]),&(b[i]));
 }
 min=a[0];max=b[0];
 for(i=0;i<n-1;i++){
	 if(min>a[i+1]) {min=a[i+1];}
	 if(max<b[i+1]) {max=b[i+1];}
 }
   for(x=1.0*min+0.5;x<max;x++){
	   for(i=0;i<n;i++){
		   if(x>a[i]&&x<b[i]) {p++;}
	   }
	   if(p>0) {s++;}
	   p=0;
   }
   if(s==max-min) {printf("%d %d",min,max);}
   else {printf("no");}
return 0;
}