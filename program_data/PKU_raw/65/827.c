int main()
{  int n,i,m,k;
   int a[100];
   int s=0,l=0,t=0;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
  scanf("%d%d",&m,&k);
  if(m==k){a[i]=2;}
  if((m==0&&k==1)||(m==1&&k==2)||(m==2&&k==0)){a[i]=1;}
  if((k==0&&m==1)||(k==1&&m==2)||(k==2&&m==0)){a[i]=0;}
  }
  for(i=0;i<n;i++){
	  if(a[i]==1){s=s+1;}
	  if(a[i]==0){l=l+1;}
	  if(a[i]==2){t=t+1;}
  }
  if(s==l||t==n){
      printf("Tie");
  }
  if(s>l){
      printf("A");
  }
  if(s<l){printf("B");}
   return 0;
}