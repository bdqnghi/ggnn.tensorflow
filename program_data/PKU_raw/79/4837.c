int josafe(int n,int m) 
 {
  int jo[1000],i,j,count,s;
  for(i=0;i<n;i++)
   jo[i]=1;
  j=-1;
  for(i=1;i<=n-1;i++)
  {count=0;
   while(count<m)
    {j=(j+1)%n;
     count=count+jo[j];
    }
    jo[j]=0;
    }
 for(i=0;i<n;i++)
   if(jo[i]==1)
   {s=i+1;
   break;}
  return(s);
  }
void main()
{
 int i,a[1000],b[1000],j,c[1000];
 for(i=0;;i++)
  {scanf("%d %d",&a[i],&b[i]);
  if(a[i]==0&&b[i]==0)
   break;
  else  c[i]=josafe(a[i],b[i]);}
 for(j=0;j<i;j++)
  printf("%d\n",c[j]);
}
 







