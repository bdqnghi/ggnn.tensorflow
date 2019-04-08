

int main()
{ 

 int n,a,b,i,c,k=0,j=0;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
  {scanf("%d %d",&a,&b);
    c=a-b;
	if(c==-1||c==2)  k++;
	else if(c!=0) j++;
  }
  if(k>j)  printf("A");
  else if(k==j)  printf("Tie");
  else     printf("B");
return 0;
}