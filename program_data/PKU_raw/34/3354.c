int main()
{ int n;
  int print(int n);
  scanf("%d\n",&n);
  if (n!=1)  print(n);
  printf("End");
}
int print(int n)
{ int a,b;
  if (n%2==0) {a=(n/2);printf("%d/2=%d\n",n,a);}
     else {a=(n*3+1);printf("%d*3+1=%d\n",n,a);}
  if (a!=1) {b=print(a);}
return(0);
}