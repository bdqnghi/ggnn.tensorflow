int main()
{
   int i,j;
   int lineMax[5] = {0};
   int columnMin[5];
   int matrix[5][5];
   for( i = 0; i < 5; i++ )
	   for( j = 0; j < 5; j++ )
		   scanf( "%d", &matrix[i][j] );

   for( i = 0; i < 5; i++ )
   {
	   int max = 0;
	   for( j = 1; j < 5; j++ )
	   {
		   if( matrix[i][j] > matrix[i][max] )
			   max = j;
	   }
	   lineMax[i] = max;
   }

   for( i = 0; i < 5; i++ )
   {
	   int min = 0;
	   for( j = 1; j < 5; j++ )
	   {
		   if( matrix[j][i] < matrix[min][i] )
			   min = j;
	   }
	   columnMin[i] = min;
   }
   
   int record[5];
   int len = 0;
   for( i = 0; i < 5; i++ )
   {
	   if( columnMin[ lineMax[i] ] == i )
	   {
		   record[len] = i;
		   len++;
	   }
   }

   if( len == 0 )
	   printf( "not found\n" );
   else
   {
	   for( i = 0; i < len; i++ )
	   {
		   int line = record[i];
		   int column = lineMax[record[i]];
		   printf("%d %d %d\n",(line+1),(column+1),matrix[line][column]);
	   }
   }
   return 0;
}
