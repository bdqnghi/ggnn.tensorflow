int main()
{
   int n,k,i,m[1000],a;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&(m[i]));
       for(a=0;a<i;a++){
		   if(k==m[a]+m[i]){
			   printf("yes\n");
		       goto abc;
		   }
	   }
   }
   printf("no\n");
abc:	return 0;
}
