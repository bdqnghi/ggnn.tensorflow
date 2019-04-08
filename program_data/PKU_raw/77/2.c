
char s[255],b;

void solve(int l, int r)
{
int c=0, i=l+1, j=l+1;
while (i<r-1) {
  do {
    if (s[i++]==b) c++; else c--;
  } while (c>0);
  solve(j,i-1);
  j=i;
}
printf("%d %d\n", l, r);
}

int main()
{
int l;
scanf("%s", s);
b=s[0];
l=strlen(s)-1;
if (l%2 == 0) l--;
solve(0, l);
return 0;
}
