int N(int i,int a,int b);
int main(){
 int n[20],m[20],c,i;
 scanf("%d",&c);
 for(i=1;i<=c;i++){
  scanf("%d",&m[i]);
  scanf("%d",&n[i]);
 }
 for(i=1;i<=c;i++){
  printf("%d\n",N(1,m[i],n[i]));
 }
return 0;
}


int N(int i,int a,int b){
 int z=0,j;
 if(i>a&&a!=0)
	 z=0;
 else{ 
	 if(a==0)
	  z=1;
     else{ 
		 if(b==1)
	       z=1;
         else{ 
			 if(a<=b){
				 for(j=i;j<=a;j++){
				  z=z+N(j,a-j,b-1);
				 }}
             else{if(i!=1){
				 z=N(i-1,a-b,b)+N(i,a,b-1);}
			 else{z=N(1,a-b,b)+N(1,a,b-1);}}
 
 }}}
 return z;
}