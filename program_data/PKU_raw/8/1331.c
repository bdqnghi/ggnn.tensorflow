void input(int *p1, int *p2, int **pA, int **pB)
{
int i;
scanf("%d %d", p1, p2);
*pA=(int*)malloc((*p1)*sizeof(int));
*pB=(int*)malloc((*p2)*sizeof(int));  
 for (i=0; i<*p1; i++)
scanf("%d", *pA+i);
 for (i=0; i<*p2; i++)
scanf("%d", *pB+i);    
}
void sort(int p, int *pX)
{
 int i, j, temp;
 for (i=0; i<p; i++)
 {
  for (j=p-1; j>i; j--)
  {
   if (pX[j]<pX[j-1])
   {
    temp=pX[j];
    pX[j]=pX[j-1];
    pX[j-1]=temp;                 
   }   
  }   
 }
} 
void combine(int p1, int p2, int *pA, int *pB, int **pC)
{
 *pC=(int*)malloc((p1+p2)*sizeof(int));
 int i;
 for (i=0; i<p1; i++)
     (*pC)[i]=pA[i];
 for (i=0; i<p2; i++)
     (*pC)[p1+i]=pB[i]; 
 free(pA);
 free(pB);   
} 
void output(int p, int *pC)
{
 int i;
 for (i=0; i<p-1; i++)
     printf("%d ", pC[i]);
 printf("%d\n", pC[p-1]);
 free(pC);  
}
main()
{
 int p1, p2, *pA, *pB, *pC;
 input(&p1, &p2, &pA, &pB);
 sort(p1, pA);
 sort(p2, pB);
 combine(p1, p2, pA, pB, &pC);
 output(p1+p2, pC);
}