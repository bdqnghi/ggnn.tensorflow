

int main(int argc, char* argv[])
{
  int i,n,nn,k,t,j,c;  
  scanf("%d",&n);
  for (i=0;i<n;i++){
      scanf("%d",&nn);
	  if(nn==0){
		  printf("60\n");
	  }
	  else{
		  c=0;
		  t=0;

        for (j=1;j<=nn;j++){
           scanf("%d",&k);
		   if (k<60){
			   c=k;
			   t=k+j*3;
		   }
		}
		if (t>=63)
			c=c-(t-63);
		else if (t<60)
			c=c+(60-t);
		printf("%d\n",c);
	  }
  }
	return 0;
}
