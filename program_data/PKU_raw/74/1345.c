void main()
{
	int hui(int i);
    int su(int i);
int m,n,i,j,k,l;
scanf("%d %d",&m,&n);
for(i=n;i>=m;i--)
{  
	if(hui(i)==1&&su(i)==1)    break;
}
for(j=m;j<i;j++)
{  
	if(hui(j)==1&&su(j)==1)    printf("%d,",j);
}
if(i==m-1)    printf("no");
else printf("%d",i);
}
 int hui(int i)
 {
	 int m=0,j,temp;
	 temp=i;
	 while(temp!=0)
	 {
		 j=temp%10;
		 m=m*10+j;
         temp=temp/10;
     }
     if(m==i) return(1);
	 else return(0);
 }
  int su(int i)
  {
	  int a,s,d;
	  a=sqrt(i);
      for(s=2;s<=a;s++)
	  {
		  if(i%s==0)  break;
	  }
       if(i%s==0)   return(0);
	   else return(1);
  }