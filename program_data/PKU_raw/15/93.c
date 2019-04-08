int main() {
  int s[10][10];
  int N;
  int n;
  scanf ("%d", &n);
  int i, j;
  int c=0, d ;
  int count0; 
  int q;
  count0 = 0;
  c=0;
  d=0;
  for (i=0; i<n; i++) {
	  q=0;
	  for (j=0; j<n; j++) {
		  scanf ("%d", &s[i][j]);
		  
	  if (s[i][j] == 0) {q++; count0++; }	  
	  }
	  if ( q>1) { d++; } 
		  if (q>c) {c=q;}
	  }
  N = d*c - count0;
  printf ("%d", N);
  return 0;
}