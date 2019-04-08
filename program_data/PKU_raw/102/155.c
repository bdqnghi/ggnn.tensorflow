int cmp(const void * a,const void *b)
{
	return *((int *)a)-*((int *)b);
}
typedef struct{
  int  sex;
  float high;
} Man;
Man man[41];
float male[41];
float female[41];
int main()
{
 int n;
 scanf("%d",&n);
 int i;
char  str[10];
int j=0;
int k=0;
 for(i=0;i<n;i++)
 {
	 scanf("%s%f",str,&man[i].high);

	 if(strcmp(str,"male")==0) 
	 {
		 man[i].sex=0; 
		 male[j++]=man[i].high;
	 }
	 else  {
		 man[i].sex=1;
		 female[k++]=man[i].high;
	 }
}
 qsort(male,j,sizeof(float),cmp);
 qsort(female,k,sizeof(float),cmp);
 for(i=0;i<j;i++)
  printf("%.2f ",male[i]);
  for(i=k-1;i>0;i--)
  printf("%.2f ",female[i]);
   printf("%.2f",female[i]);
  printf("\n");
return 0;
}