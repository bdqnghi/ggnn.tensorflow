int main()
{
  char a[201],b[201];
  int i,mark;
  int a1[201],b1[201],c1[201];
  int chang1,chang2,chang3;
  scanf("%d",&mark);
  while(mark--){
  scanf("%s%s",a,b);
  //???????
  memset(a1,0,sizeof(a1));
  memset(b1,0,sizeof(b1));
  memset(c1,0,sizeof(c1));
  chang1 = strlen(a);
  chang2 = strlen(b);
  for ( i = 0 ; i <chang1 ; i++)
    a1[i] = a[chang1 - 1 - i] - '0';
  for ( i = 0 ; i <chang2 ; i++)
    b1[i] = b[chang2 - 1 - i] - '0';
  chang3 = chang1;
  for ( i = 0 ; i < chang3 ; i++){
  c1[i] += a1[i]-b1[i];
  if (c1[i] < 0){
      c1[i+1]--;
      c1[i] += 10;
  }
}
  if (c1[chang3-1] == 0)
    chang3--;
  for ( i = chang3-1; i >= 0 ; i--)
    printf("%d",c1[i]);
  printf("\n");
  }
  return 0;
}
