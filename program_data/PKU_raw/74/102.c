int huiwen(int x,int y);
int sushu(int x);
void main()
{
 int m,n,i,j,k=0,temp,b[10000],t;
 scanf("%d%d",&m,&n);
 for(i=m;i<=n;i++)
 {
	 if((i==huiwen(i,0))&&(sushu(i)==1))
	 {b[k]=i;k=k+1;}
 }
 
 for(i=0;i<k;i++)
 {
	 t=i;
     for(j=i+1;j<k;j++)
		 if(b[j]<b[t])
			 t=j;
	 if(t!=i)
		 {
		   temp=b[i];
		   b[i]=b[t];
		   b[t]=temp;
		  }
 }
if(b[0]==0)printf("no");
else
 {
 printf("%d",b[0]);
 
 for(i=1;i<k;i++)
	 printf(",%d",b[i]);
}
}
int huiwen (int x,int y)
{
	if(x==0)return (y);
	else return(huiwen(x/10,y*10+x%10));
}
int sushu(int x)
{
	int j ;
	for(j=2;j<=x;j++)
		if(x%j==0)
			if(j!=x){ return(0);break;}
			else { return(1);}
}
