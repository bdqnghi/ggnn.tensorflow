int main(){
int n;
int a[1000],b[1000];
scanf("%d",&n);
int i,c,d;
c=0;
d=0;
for(i=0;i<n;i++){
   scanf("%d %d",&a[i],&b[i]);
   if(a[i]-b[i]==0){
      c+=0;
	  }else if((b[i]-a[i]==1)||((a[i]==2)&&(b[i]==0))){
	  c+=1;
	  }else{
	  d+=1;
	  }
}
 if(c>d){
 printf("A");
 }else if(c<d){
	 printf("B");
 }else{
	 printf("Tie");
 }
return 0;
}