
int main( int argc, char* argv[] ){
  int n;
  int miss,misspointer;
  int second = 0, time = 0;

  scanf( "%d", &n );
  for ( int i = 0; i < n; i++ ) {
      scanf( "%d", &miss );
      if ( miss == 0 ){
         printf( "60\n");
         continue;
      }
      int j = 0;
      do{
        scanf( "%d", &misspointer );
        if ( (second < 60)&&(misspointer < 60) ){
          second = misspointer + time * 3;
		 // printf("%d\n", second);
          if ( (second + 2) < 60 ){
            time ++;
          }
        }
        j++;
      }while( j < miss );
	  if ( (second < 60)&&((second + 2)>60) ){
		  second -= time * 3;
	  }
	  else{
		second = 60 - time * 3;
	  }
      printf( "%d\n", second );
	  second = 0;
	  time = 0;
	//  printf("************************\n");
  }
  return 0;
}
