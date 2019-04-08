int main()
{
	int  n;int  a[100][2];
int  i=0;
int x=0;int c=0;
scanf("%d",&n);
for(i=0;i<n;i++){
for(int  j=0;j<2;j++)
            scanf("%d",&a[i][j]);
}
 
for(i=0;i<n;i++){
	if(90<=a[i][0]&&a[i][0]<=140&&60<=a[i][1]&&a[i][1]<=90){
   x++;
   if(x>c)  c=x;
	}
	else 
		x=0;
 }
printf("%d",c);
 return 0;
}