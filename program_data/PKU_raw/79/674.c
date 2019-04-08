main()
{
	int n[30],m[30],a[300];
int s,j,i,k;
 for(i=0;;i++)
 {
  scanf("%d %d",&n[i],&m[i]);
  if(n[i]==0&&m[i]==0)
  {
    s=i;   //??S?????
    break;
  }
 }
  for(i=0;i<s;i++) //????
  { 
	  k=1;
    for(j=1;j<=n[i];j++)
        a[j]=j;        //?????
    for(;n[i]>1;n[i]--)//??N-1???
		   for(j=1;j<=n[i];j++)//????????
			if((m[i]-j+k-1)%n[i]==0)
			{
				k=j;
				
				for(;j<n[i];j++)
			    a[j]=a[j+1];
			}
	 printf("%d\n",a[1]);
	  }
}