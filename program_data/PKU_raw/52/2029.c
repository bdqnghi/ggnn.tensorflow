int main()
{ int n,q;
  scanf("%d %d",&n, &q);
  int sz[100];

  for(int m=0;m<n;m++){
	  scanf("%d ",&(sz[m]));
  }



  for (int i=0;i<q;i++){

	  int e;
	  e=sz[n-1];

    for (int j=n-2;j>=0;j--){
         sz[j+1]=sz[j];
  }
	  sz[0]=e;
  }


  for (int w=0;w<n-1;w++){
    printf("%d ",sz[w]);
  }
printf( "%d" , sz[ n - 1 ] );

  return 0;
}