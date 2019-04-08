int f(int a,int b)
{ if(a==0)return(b);
  else return(f(a/10,b*10+a%10));
}
int g(int a)
{int i,j,t=1;
 j=sqrt(a);
 for(i=2;i<=j;i++)
	 if(a%i==0)t=0;
	 return(t);
}
void main()
{ int x,y,i,t=0;
  scanf("%d %d",&x,&y);
  for(i=x;i<=y;+i++)
  {if(f(i,0)==i&&g(i))
  {if(t==0)printf("%d",i);
  else printf(",%d",i);
  t=t+1;}}
  if(t==0)printf("no");
}

