
int main(){
  int a[300];
  char ch;
  int i,j;
  j=0;
  memset(a,0,sizeof(a));
  while (scanf("%c",&ch)!=EOF) a[ch]++;
  for (i=65;i<=90;i++)
    if (a[i]) {printf("%c=%d\n",i,a[i]);j++;}
  for (i=97;i<=122;i++)
    if (a[i]) {printf("%c=%d\n",i,a[i]);j++;}
  if (!j) printf("No\n");
}