void main()
{
int m,n,i,j=0;
int a[100];
scanf("%d%d",&m,&n);
for(i=0;i<=99;i++)a[i]=0;
int su(int a,int b);
int hui(int c,int d);
for(i=m;i<=n;i++)
{if(su(i,2)==1&&i==hui(i,0))a[j++]=i;
}
if(a[0]==0)printf("no");
else{ printf("%d",a[0]);
for(i=1;a[i]>0;i++)printf(",%d",a[i]);
}


}
int su(int a,int b)
{
if(b==a)return 1;
else if(a%b==0)return 0;
else return(su(a,b+1));
}
int hui(int c,int d)
{
if(c==0)return d;
else return(hui(c/10,d*10+c%10));


}