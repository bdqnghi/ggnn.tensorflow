int main()
{
 int a[16],i,j,s,k,l;

for(l=1;l<3000;l++)
 {
   s=0;
   scanf("%d",&a[0]);
   if(a[0]==-1) break;
   for(k=1;k<=16;k++)
   {
	 scanf("%d",&a[k]);
     if(a[k]==0)break;
   }
   for(i=0;i<k-1;i++)
   {
	 for(j=i+1;j<k;j++)
	 if(a[i]==a[j]*2 || a[j]==a[i]*2) s=s+1;	 
   }printf("%d\n",s);

}
 return 0;
}

