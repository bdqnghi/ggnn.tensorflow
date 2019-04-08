int f(int n){ 
	int c;
	if (n==1){
	c=1;
	}
	if (n==2){
		c=1;
	}
	if (n>2){
		int a=1;
		int b=1;
        for (int i=1;i<n-1;i++){
			c=a+b;
			a=b;
			b=c;
		}
	}
return c;
}
int main(){
int n,sz[21],i;
scanf ("%d",&n);
for (i=0;i<n;i++){
   scanf ("%d",&sz[i]);
}
for (i=0;i<n;i++){
printf ("%d\n",f(sz[i]));
}
return 0;
}