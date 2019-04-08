int main()
{
int n,a,b;
scanf("%d",&n);
int shuzu[10000],Shuzu[10000],p,q,num=0;
for(int i=0;i<n;i++)
scanf("%d%d",&shuzu[i],&Shuzu[i]);
a=shuzu[0];
for(int j=1;j<n;j++) 
if(a>shuzu[j]) a=shuzu[j];
b=Shuzu[0];
for(int l=1;l<n;l++) 
if(b<Shuzu[l]) b=Shuzu[l];
p=shuzu[0];
q=Shuzu[0];
for(int x=1;x<=n;x++,num=0)
 {
  for(int y=1;y<n;y++)
    {
     if(!(shuzu[y]>q)&&!(Shuzu[y]<p)) 
      {  num++;
         if(shuzu[y]<p) p=shuzu[y];
         if(Shuzu[y]>q) q=Shuzu[y];
      }
    }
  if(x==n) break;
 }
if(num==n-1)
printf("%d %d",a,b);
else
printf("no");
return 0;
}

