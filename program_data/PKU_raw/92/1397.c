void main()
{
  int n,a[1000],b[1000],m[1000],c=0,i,j,t,x,y;
  for(;;)
  {scanf("%d",&n);
  if(n==0)
  break;
  x=0;
  y=0;
  m[c]=-n;
  for(i=0;i<=n-1;i++)
  scanf("%d",&a[i]);
  for(i=0;i<=n-1;i++)
  scanf("%d",&b[i]);
  for(j=0;j<n-1;j++)
  for(i=0;i<n-j-1;i++)
 {	 if(a[i]<a[i+1])
 {  t=a[i];
    a[i]=a[i+1];
	a[i+1]=t;
 }
     if(b[i]<b[i+1])
	 { t=b[i];
	   b[i]=b[i+1];
	   b[i+1]=t;
      }
}
for(j=0;j<=n-1;j++)
{ for(i=0;i<=n-1;i++)
  {  if(i+j<=n-1)
  {if(a[i]>b[i+j])
		 x++;
   if(a[i]<b[i+j])
	     y++;
  }
     if(i+j>=n)
	 { if(a[i]>b[i+j-n])
	     x++;
	   if(a[i]<b[i+j-n])
		 y++;
	 }
  }	 
   if(x-y>m[c])
	m[c]=x-y;
     x=0;
	 y=0;
   }
  c++;
  }
   for(i=0;i<=c-1;i++)
   printf("%d\n",200*m[i]);
}