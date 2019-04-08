void main(){
int x[16], i, j, g, n, m;
for(j=0;;j++){
  for(i=0,n=0;i<16;i++){
	scanf("%d", &x[i]);
	if(x[i]==0)break;
  }
  if(x[0]==-1)break;
  g=i;
  for(i=0; i<g; i++){
	  for(m=0;m<g;m++){
      if((float)x[i]==x[m]*2)n++;
	  }
  }
  printf("%d\n", n);
}
}