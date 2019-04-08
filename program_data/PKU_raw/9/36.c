
typedef struct 
{
	char id[11];
	int age;
}MAN;

void sort(MAN* array, int nSize)
{
  int i,j;
  for(i = 0; i < nSize ; i++)
  {
	  for(j = nSize - 1; j > i; j--)
	  {
		  if( array[j].age >= 60 && array[j].age > array[j-1].age)
		  {
			  MAN temp = array[j];
			  array[j]= array[j-1];
			  array[j-1] = temp;
		  }
	  }
  }
}
int main()
{
   int i, n;
   MAN * array = 0;
   double ava, maxgap = 0;
 
   scanf("%d", &n);
   array = (MAN*)malloc(n * sizeof(MAN));
   for(i = 0; i < n ; i++)
   {
	   scanf("%s %d", array[i].id, &(array[i].age));
   }
   
   sort(array, n);
   for(i = 0; i < n; i++)
   {
	  printf("%s\n",array[i].id);
   }
 
   free(array);
   return 0;
}