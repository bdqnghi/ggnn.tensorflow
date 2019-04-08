int main()
{
  
  int n,m,i,l=0,t,j;
  int a[1000]={0};
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
     scanf("%d",&a[i]);
  for(i=0;i<m;i++){
     t=n-a[i];
    for(j=i+1;j<m;j++)
		if(a[j]==t){
        printf("yes");
	    l++;
		break;
		}
   if(l>0)
	   break;
  }
   if(l==0)
		printf("no");

return 0;
}