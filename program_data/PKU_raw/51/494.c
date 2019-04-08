int main()
{
 char ori[500], a[500][6];
 int num[500] = {0}, i, n, j, count = 0;
 scanf("%d", &n);
 scanf("%s", ori);
 int l = strlen(ori);
 for(i = 0; i < l - n + 1; i++)
 {
  char tmp[6];
  for(j = 0; j < n; j++)
  {
   tmp[j] = ori[i + j];
  }
  tmp[j] = '\0';
  int found = 0;
  for(j = 0; j < count; j++)
  {
   if(strcmp(a[j], tmp) == 0)
   {
    found = 1;
    num[j]++;
    break;
   }
  }
  if(found == 0)
  {
   for(j = 0; j <= n; j++)
   {
    a[count][j] = tmp[j];
   }
   num[count]++;
   count++;
  }
 }
 int max = 0;
 for(i = 0; i < count; i++)
 {
  if(num[i] > max) max = num[i];
 }
 if(max == 1) 
 {
  printf("NO");
  return 0;
 }
 printf("%d\n", max);
 for(i = 0; i < count; i++)
 {
  if(num[i] == max)
   printf("%s\n", a[i]);
 }

 return 0;
}