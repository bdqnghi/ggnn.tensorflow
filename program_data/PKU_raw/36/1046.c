void main()
{
	int l1,l2,i,s1=0,s2=0;
  char a[300],b[300];
  scanf("%s %s",a,b);
  l1=strlen(a);
  l2=strlen(b);
  if(l1!=l2)
	  printf("NO");
  else
  {
	  for(i=0;i<l1;i++)
	  {
		  s1+=a[i];
	      s2+=b[i];
	  }
	  if(s1==s2)
		  printf("YES");
	  else
	  printf("NO");
  }

}