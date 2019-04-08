int main()
{ void pai(double a[],int n,double c[]);
  double a[100]={0},sum=0,ave=0,b[100]={0};
  int i=0,n=0,c[100]={0},k=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { scanf("%lf",&a[i]);
    sum=sum+a[i];
  
		}
		ave=sum/n;
	for(i=0;i<n;i++)
	{ b[i]=fabs(a[i]-ave);
	  
		
		}
	pai(b,n,a);
	for(i=0;i<n;i++)
	{ if(b[i]==b[i+1])
	   k=k+1;
	   else break;	  	  
		}
	pai(a,k,b);
	for(i=k-1;i>=0;i--)
	{ printf("%d",(int)a[i]);
	  if(i>0)
	   printf(",");
		}
		return(0);
}
void pai(double a[],int n,double c[])
{ double t=0;
  int i=0,t1=0,j=0;
  for(i=0;i<n;i++)
   {for(j=0;j<n-i-1;j++)
      { if(a[j]<a[j+1])
         { t=a[j];
           a[j]=a[j+1];
           a[j+1]=t;
           t=c[j];
           c[j]=c[j+1];
           c[j+1]=t;
				}
			}
		}
}