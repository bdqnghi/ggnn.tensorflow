int max(int b[25])
{int i,t=b[0];
for(i=0;i<25;i++) {if(b[i]>t) t=b[i];}
return t;
}
int destroy(int a[25],int t)
{int b[25]={1};
int i,j;
for(j=t-1;j>=0;j--)
{for(i=j+1;i<=t;i++) {if(a[j]>=a[i]&&(b[i]+1)>b[j]) b[j]=b[i]+1;}
}
return max(b)+1;
}
void main()
{int x,i=0;
int a[25]={0};
scanf("%d",&x);
for(i=0;i<=x-1;i++) scanf("%d",&a[i]);
printf("%d",destroy(a,x-1));
}
