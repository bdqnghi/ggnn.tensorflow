int main(){
     int a,b,c,d,e,f,g,i,j,k,l,m,n;
	 scanf("%d",&a);
	 i=0;
	 j=0;
	 k=0;
	 l=0;
	 m=0;
	 n=0;
	 for (b=a;b>99;){
	 b-=100;
	 i=i+1;
     }
	 for (c=b;c>49;){
	 c-=50;
	 j=j+1;
	 }
     for(d=c;d>19;){
	 d-=20;
	 k=k+1;
	 }
	 for(e=d;e>9;){
	 e-=10;
	 l=l+1;
	 }
	 for(f=e;f>4;){
	 f-=5;
	 m=m+1;
	 }
	 for(g=f;g>0;){
	 g-=1;
	 n=n+1;
	 }
	 printf("%d\n%d\n%d\n%d\n%d\n%d\n",i,j,k,l,m,n);
	 return 0;
}
