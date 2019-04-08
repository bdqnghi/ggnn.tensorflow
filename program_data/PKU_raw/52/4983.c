int main()
{ int m=0,n=0,a[100]={0},i=0;
  int *p;
  void prt(int*p,int m,int n);
  p=a;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  { scanf("%d",p+i);
    }
  prt(p,m,n);
  for(i=0;i<n;i++)
  { printf("%d",a[i]);
    if(i<n-1) printf(" ");
  
  }
  getchar();
  getchar();
  return(0);
}
void prt(int*p,int m,int n)
{ int i=0,t=0,b[100]={0},j=0;
  for(i=n-m,j=0;i<n;i++,j++)
  { b[j]=*(p+i);
  }
  for(i=n-m-1,j=n-1;i>=0;i--,j--)
  {  *(p+j)=*(p+i);
  
  }
  for(i=0;i<m;i++)
  {  *(p+i)=b[i];
  
  }

}