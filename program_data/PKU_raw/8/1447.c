int a,b,c[100],d[100];
void size()
{scanf("%d %d",&a,&b);
}
void num(int s,int j[])
{int i;
for(i=0;i<s;i++)
{scanf("%d",&j[i]);}
}
void arrange(int s,int j[])
{int i,k,temp;
for(k=0;k<s-1;k++)
{for(i=0;i<s-k-1;i++)
{if(j[i+1]<=j[i]){temp=j[i];j[i]=j[i+1];j[i+1]=temp;}
}
}
}
void plus(int x,int m[],int y,int n[])
{int i;
arrange(x,m);arrange(y,n);
printf("%d",m[0]);
for(i=1;i<x;i++){printf(" %d",m[i]);}
for(i=0;i<y;i++){printf(" %d",n[i]);}
}
void main()
{
	size();
	num(a,c);
	num(b,d);
	plus(a,c,b,d);
}
