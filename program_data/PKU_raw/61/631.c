int main () {
	int n,i,j,a,b,t;
	int p[1000];
	int s;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&p[i]);
	}
for (i=0;i<n;i++){
		if (p[i]==1||p[i]==2){
				printf ("1\n");
			}
			else {
				s=0;a=1;b=1;
				for (j=1;j<=p[i]-2;j++){
				s=a+b;
			t=b;
			b=s;
			a=t;

			
		}
		
		printf ("%d\n",s);
			}
		

}
return 0;
}