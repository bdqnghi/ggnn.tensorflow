int main()
{
  int i,n,j,a=0,b=0,c=0,d=0;
  double w,x,y,z;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
    scanf("%d",&j);
	if(j<=18){
	  a++;
	  }
	  else if(19<=j&&j<=35){
	  b++;
	  }
	  else if(36<=j&&j<=60){
	  c++;
	  }
	  else   d++;
	  }
      w=(double)a/n*100;
      x=(double)b/n*100;
	  y=(double)c/n*100;
	  z=(double)d/n*100;
	  printf("1-18: %.2lf%%\n",w);
	  printf("19-35: %.2lf%%\n",x);
      printf("36-60: %.2lf%%\n",y);
      printf("60??: %.2lf%%\n",z);
      return 0;
}

