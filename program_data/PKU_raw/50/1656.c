void main()
{int w,i,m=0;
int a[12]={12,31,28,31,30,31,30,31,31,30,31,30};
int b[12];
scanf("%d",&w);
for(i=0;i<12;i++)
{b[i]=(w+a[i])%7;
w=b[i];
if(b[i]==5){printf("%d\n",i+1);}
}
}