int main()
{
    int n,s[100000],m,i,tmp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
}
    scanf("%d",&m);
	for(i=0;i<n;i++)
    {
       if((s[i]!=m)&&(tmp==0)) 
	   {
		   printf("%d",s[i]);
		   tmp=1;
	   }
	   else if((s[i]!=m)&&(tmp==1))
	   {
		   printf(" %d",s[i]);
	   }
	   
    }
   return 0;
}