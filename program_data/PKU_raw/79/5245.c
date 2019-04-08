int main()
{
  int n[300], m[300], a=0,i, j[300],k=0;
      for(i=0;i<300;i++){
      scanf("%d %d", &n[i], &m[i]);
      if(n[i]==0){
           a=i;
           break;
	  }
      }
  for(i=0;i<a;i++){
      j[i]=0;
	  for (k=1; k<n[i]; k++){
		  j[i]=(j[i]+m[i])%(k+1);
      }
          printf("%d\n",j[i]+1);
  }
  return 0;
}
