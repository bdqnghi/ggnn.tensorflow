int main()
{int j,i,n,k,b=0;
int a[1001]={0};
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
 
for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 {if(a[i]+a[j]==k) 
 {b++;break;}
 if(b!=0) break;}
 
 if(b==0)
	 printf("no");
 else
printf("yes");
}