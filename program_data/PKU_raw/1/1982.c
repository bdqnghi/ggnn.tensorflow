//============================================================================
// Name        : 30fenjie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

int factorize(int a, int b) {
  int factor,i;
  if(a==1)  factor=1;
  if(a!=1)  factor=0;
  for (i=b;i<=a;i++)
	  if (a%i==0)
		  factor=factor+factorize(a/i,i);
  return factor;
}
int main() {
	int n, a;
	for (cin>>n; n--; cout<<factorize(a,2)<<endl) {
		cin>>a;
	}
}