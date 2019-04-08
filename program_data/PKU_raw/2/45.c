
main()
{
   struct h
   {
      char name[27];
	  int mun;
	  struct h *next;
   } *p,*q,*head;
int k,j,i,l,n,a[26][1001],b;
  scanf("%d",&n);

  p=len;
  q=head=p;
  for(i=0;i<26;i++)
		for(j=0;j<1000;j++)
	      a[i][j]=0;
  for(i=0;i<n;i++)
 {
  scanf("%d %s",&p->mun,p->name);
  
  l=strlen(p->name);
  for(j=0;j<l;j++)
  {
     b=(p->name)[j]-65;/*????????*/
	 k=a[b][0]+=1;/*???????????? */
	 a[b][k]=p->mun;/*???p->mun????????*/
  }
  q=len;
  p->next=q;
  p=q;
 }
  p=head;
  int max=a[0][0];
  j=0;
  for(i=0;i<26;i++)
  {
	  if(max<a[i][0]){max=a[i][0];j=i;}
	  
  }
  printf("%c\n%d\n",j+65,max);
  i=1;
  while(a[j][i])
  {
    printf("%d\n",a[j][i]);
	i++;
  } 



}
