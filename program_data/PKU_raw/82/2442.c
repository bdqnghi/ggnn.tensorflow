int main(){
   int n,d,x,i,j,sz[100],k[100],q;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
	  scanf("%d %d",&d,&x);
	  if((d>=90)&&(d<=140)&&(x>=60)&&(x<=90))
        sz[i]=1;
	  else sz[i]=0;
	  }
   for(i=0;i<n;i++){
	   if(sz[i]==1){
            k[i]=1;
	   for(j=i+1;j<n;j++){
		   if(sz[j]==1)
            k[i]++;
		   else break;
	   }
   }
else k[i]=0;
   }
   q=k[0];
   for(i=1;i<n;i++){
	   if(k[i]>q)
		   q=k[i];
	   }
	   printf("%d",q);
	return 0;
}
