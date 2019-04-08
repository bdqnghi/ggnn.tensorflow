int a[100];
int b[100];
int c[100];
int n,m;
int main ()
{  void cout ();
   void p ();
   void com ();
   void play ();
   cout ();
   p ();
   com ();
   play ();
   return 0;
}

void cout ()
{ int i;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  for(i=0;i<m;i++)
   scanf("%d",&b[i]);
}

void p ()
{  int i,j,t;
   for(i=0;i<n;i++)
     for(j=0;j<n-i-1;j++)
     {  if(a[j]>=a[j+1])
       {  t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
       }
     }
    for(i=0;i<m;i++)
     for(j=i;j<m-i-1;j++)
     {  if(b[j]>=b[j+1])
       {  t=b[j];
          b[j]=b[j+1];
          b[j+1]=t;
       }
     }
   
}

void com ()
{  int i;
   for(i=0;i<n;i++)
     c[i]=a[i];
   for(i=n;i<n+m;i++)
     c[i]=b[i-n];
}

void play ()
{  int i;
   for(i=0;i<n+m;i++)
    { printf("%d",c[i]);
      if (i!=n+m-1) printf(" ");
    }
}
