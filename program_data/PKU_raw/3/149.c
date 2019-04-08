int main(int argc, char* argv[])
{  int i,j,n,k;
   int m=0;
	int a[1000];   
   scanf("%d",&n);
   scanf("%d",&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {for(j=i+1;j<n;j++)
   {
	   if(a[i]+a[j]==k)
       m++;
   }
   }
   if(m!=0)
	   printf("yes");
   if(m==0)
	   printf("no");
   return 0;
}

