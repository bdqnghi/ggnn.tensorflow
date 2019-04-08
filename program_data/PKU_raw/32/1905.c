char n1[100];
char n2[100];
char n3[101];
int w,i;

void do_sub();

void main() 
{
scanf("%d",&w);
for(i=0;i<w;i++)
{
 scanf("%s", n1);
 scanf("%s", n2);
 do_sub();
}
}
void do_sub()
{
 int iLen1;
 int iLen2;
 int iBorrow = 0;
 int n = 0;
 int sign = 0;

 iLen1 = strlen(n1);
 iLen2 = strlen(n2);
 if ((iLen2 > iLen1) || (iLen2 == iLen1) && (strcmp(n2, n1) > 0))
 {
  strcpy(n3, n1);
  strcpy(n1, n2);
  strcpy(n2, n3);
  sign = -1;
 }

 for(iLen1 = strlen(n1)-1, iLen2 = strlen(n2)-1; (iLen1 >= 0) && (iLen2 >= 0); iLen1--, iLen2--)
 {
  n3[n] = n1[iLen1] - n2[iLen2] - iBorrow;
  iBorrow = (n3[n] >= 0) ? 0 : 1;
  if (n3[n] < 0)
  {
   n3[n] += 10;
  }
  n++;
 }
 for(; iLen1 >= 0; iLen1--)
 {
  n3[n] = n1[iLen1] - '0' - iBorrow;
  iBorrow = (n3[n] >= 0) ? 0 : 1;
  if (n3[n] < 0)
  {
   n3[n] += 10;
  }
  n++;
 }

 if (sign == -1)
 {
  printf("-");
 }
 for(n--; n >= 0; n--)
 {
  printf("%d", n3[n]);
 }
 printf("\n");
}