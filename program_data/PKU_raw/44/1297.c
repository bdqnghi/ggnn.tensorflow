
int reverse(int x);

int main()
{
	int p,num,k;
	for(k=1;k<7;k++){
	   scanf("%d",&num);
	   p=reverse(num);
	   printf("%d\n",p);
	}return 0;
}
int reverse(int x)
{
	int i,s,cishu,sz[20],a;
	cishu=0;
	a=1;
	if(x<0){
		 a=-1;
		 x=-x;
	    }
	  if(x==0){s=0;}
      else{
		  for(i=1;;i++){
		     if(x%10==0){
			   x/=10;
			 }else{break;}
		  }for(i=0;;i++){
		    sz[i]=x%10;
		    x=x/10;
			cishu+=1;
		    if(x==0){break;}
		  }
		  s=sz[0];
	      for(i=1;i<cishu;i++){
		      s=10*s;
		      s=s+sz[i];
		  }s=a*s;
	  }return s;
}