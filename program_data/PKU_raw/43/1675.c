
int main()
{
int m,i;
scanf("%d",&m);
for(i=3;i<=(m/2);i=i+2)
{
     int a,b,p=0,q=0;
	 for(a=2;a<=(i-1);a++)
	 {
	 if(i%a==0) p=p+1;  
	 }
	 if(p==0)
	 {
	 for(b=2;b<=(m-i-1);b++)
	 {
	 if((m-i)%b==0) q=q+1;
	 }
	 if(q==0) printf("%d %d\n",i,m-i);
	 }
}


return 0;
}