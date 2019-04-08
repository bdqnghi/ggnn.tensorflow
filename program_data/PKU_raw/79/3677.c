int judge(int j,int n)   //?judge????????j?n??j?0//
{  
   if(j==n)   j=0;   
   return j;
}
int choose(int n,int m)
{   
	int i,j=0,k;
	int a[301]={0};
	for(k=0;k<n-1;k++)    //??n-1??k?????????//
	{
	  for(i=0;i<m;i++)     //???????m???i????//
	  {   
		for(;a[judge(j,n)+1]!=0;)
                  {
                     j=judge(j,n)+1; 
                  }
                  	j=judge(j,n)+1;  
      } 
	  a[j]=1; 
	}
	for(k=1;a[k]!=0;)
	{k=judge(k,n)+1;}
    return k;
}
	  
int main()
{
   int n[100],m[100],i,num;
   for(i=0;;i++)
   {
    scanf("%d %d",&n[i],&m[i]);
	if (n[i]==0)  break;
   }
   num=i;
   for(i=0;i<num;i++)
   {
	   printf("%d\n",choose(n[i],m[i]));
   }
   return 0;
}



