
int count;

void f(int n, int min) {
int i;
if (n == min) { count++; return;}
if (n % min!=0) { return;}
for (i = min; i <= n; i++)
f(n/min, i);
}


int main() {
int N,i,num,j;
scanf("%d",&num);
for(j=1;j<=num;j++){
count = 0;
scanf("%d",&N);
for (i = 2; i <= N;i++)
f(N, i);
printf("%d\n",count);
}
return 0;
}
