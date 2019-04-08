void main()
{unsigned int f(unsigned int x);
unsigned int a,m,n,i,j,k=0,l,r,s,t,g=0;unsigned int b[10000],c[10000],e[10000],d[10000];
scanf("%d %d",&m,&n);
for(i=m;i<n+1;i++)
{for(j=2;j<i;j++)
	 if(i%j==0) break;
 if(j==i) {b[k]=i;k++;}
}
l=k;
for(i=0;i<l;i++)
{
 a=log10(b[i]);
 c[i]=b[i];
 d[0]=b[i]/f(a);
 for(j=1;j<=a;)
  {b[i]=b[i]-d[j-1]*f(a-j+1);
  d[j]=b[i]/f(a-j);
  j++;}
 for(r=0,s=a;r<=a;r++,s--)
	 if(d[r]!=d[s]) break;
 if(r>a) {e[0]=c[i];t=i;g=1;break;}
}
if(g==0) printf("no");
else if(g==1)
{printf("%d",e[0]);
for(i=t+1;i<l;i++)
{
 a=log10(b[i]);
 e[i]=b[i];
 d[0]=b[i]/f(a);
 for(j=1;j<=a;)
  {b[i]=b[i]-d[j-1]*f(a-j+1);
  d[j]=b[i]/f(a-j);
  j++;}
 for(r=0,s=a;r<=a;r++,s--)
	 if(d[r]!=d[s]) break;
 if(r>a) printf(",%d",e[i]);
}
}
}

unsigned int f(unsigned int x)
{unsigned int y=1,i;
for(i=0;i<x;i++)
y=y*10;
return(y);}
