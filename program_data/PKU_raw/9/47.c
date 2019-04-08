void main()
{
  int n,i,j;
  struct
  {
    char ID[10];
	int a;
	int p;
  } s[100],t;
 /* char ID[100][10];
  int a[100];
  int p[100];*/
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%s%d",s[i].ID,&s[i].a);
	s[i].p=i;
  }
  
  for(i=1;i<n;i++)
	  for(j=i+1;j<=n;j++)
         if( ((s[i].a<60)&&(s[j].a>=60)) || ((s[i].a>=60)&&(s[j].a>=60)&&(s[i].a<s[j].a)) || ((s[i].a>=60)&&(s[j].a>=60)&&(s[i].a==s[j].a)&&(s[i].p>s[j].p)) || ((s[i].a<60)&&(s[j].a<60)&&(s[i].p>s[j].p)))
		 {
            t=s[i];
			s[i]=s[j];
			s[j]=t;
		 }
  for(i=1;i<=n;i++)
	  printf("%s\n",s[i].ID);
}	    