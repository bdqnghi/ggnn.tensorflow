int main() 
{int f(int n);
 int a,b,j,i;
 int s1[100],s2[100],s3[100];
 scanf("%d%d",&a,&b);
  
 for(s1[0]=a,i=0;s1[i]!=1;i++)
    s1[i+1]=f(s1[i]);
 for(j=i;j>=0;j--)
 {s2[i-j]=s1[j];s1[j]=0;}

 for(s1[0]=b,i=0;s1[i]!=1;i++)
    s1[i+1]=f(s1[i]);
 for(j=i;j>=0;j--)
 {s3[i-j]=s1[j];s1[j]=0;}

 for(i=0;;i++)
	 if(s2[i]!=s3[i]) { printf("%d\n",s2[i-1]);break;}
 return 0;
}
int f(int n)
{int i,t=1,m;
   for(i=0;;i++)
   {t=2*t;
   if(t>n)  {t=t/2;break;}
   }
  m=t/2+(n-t)/2;
  return m;
}
