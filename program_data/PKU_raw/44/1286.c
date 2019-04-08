int main()
{
	int reverse(int a);
	int x,y,i;
	for (i=0;i<6;i++){
		scanf ("%d",&x);
		if (x==0||x==-0){
			printf("0\n");
		}
		else if (x<0){
		x=-x;
		y=-1*reverse(x);
		printf("%d\n",y);
		}
		else if (x>0){
		y=reverse(x);
		printf("%d\n",y);
		}
	}
return 0;
}
int reverse(int a)
{
int i,j,n,m,sz[50],b,c,d;
for (n=0;;n++){
	if (pow(10,n)<=a&&a<pow(10,n+1)){
	break; 
}	
}
n=n+1;
sz[0]=a%10;
b=0;
for (m=1;m<n;m++){
	b=b+sz[m-1]*pow(10,m-1);
	d=pow(10,m);
	sz[m]=((a-b)/d)%10;	
}
c=0;
for(j=0;j<n;j++){
	c=c+pow(10,j)*sz[n-j-1];
	}
return (c);
}