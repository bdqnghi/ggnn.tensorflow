
void main()
{
 int number, largest, second, counter,n;
 counter = 1;

 scanf("%d",&n);
 largest=-10000000; second=largest;
 while ( counter <= n )
 {
  
  scanf ( "%d", &number );

  if ( number >= largest )
  {
      second  = largest;
      largest = number;
  }
  else if (second< number&&number < largest)
   second =number;
  else if(number<= second)
	  second=second;
  
  counter++;
 }
 printf ( "%d\n", largest );
 printf ( "%d\n", second);
} 