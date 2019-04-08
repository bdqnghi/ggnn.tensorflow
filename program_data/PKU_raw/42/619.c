
void main()
{
long a,b=0,c=0,d=0,e,i,k,n,del,t,m,f,p,z,x;

scanf("%d",&n);
long q[100001];

{for(i=0;i<=n-1;i++)
scanf("%d",&q[i]);
}
scanf("%d",&del);
q[n]=q[n+1]=del;
d=0;
z=0,x=0;
t=1;
p=0;
 while(p<2500)
{p=p+1;
 i=0;
 while(i<n-1)
 {
    if(q[i]==del)
    {
    for(k=i;k<=n-1;k++)
    q[k]=q[k+1]; 
     i=i+1;
    }
    else
    i=i+1;   
 }



}
c=0;
printf("%d",q[c]);
c=c+1;

while((q[c]!=del)&&(c<n))
{
printf(" %d",q[c]);
c=c+1;
}

}