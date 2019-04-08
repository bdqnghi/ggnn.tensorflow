void main()
{
int n,i,j=0,k;
long int m,temp;
scanf("%d %d",&n,&k);
loop:{
 i=1;
 j=j+1;
 m=n*j+k;
 do
 {
 if(m%(n-1)==0)
 {
 m=m/(n-1)*n+k;
 i++;
 }
 else
 {
 goto loop;
 }
 }
 while (i<n);
 printf("%ld\n",m);
 }
}
