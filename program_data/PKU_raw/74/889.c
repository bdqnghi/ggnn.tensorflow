int prime(int a)
{     int k,i;
      k=sqrt(a);
	  for(i=2;i<=k;i++)
		  if(a%i==0)  {return 0;
		                break;}
	  if(i>k)  return 1;
}
int hw(int b)
{     int a[20]={0},j=0,l;
      while(b!=0)
	  {  
	     a[j]=b%10;
		 b=(b-a[j])/10;
		 j++;
	  }
	  for(l=0;l<=(j-1);l++)
		  if(a[l]!=a[j-1-l]) { return 0;
		                        break;}
		return 1;
}
void main()
{
	int s,m,n,flag=1;
	scanf("%d %d",&m,&n);
	for(s=m;s<=n;s++)
		if(prime(s)&&hw(s)) 
		{if(flag==0){printf(",");}
		printf("%d",s);
		flag=0;}
	if(flag==1) printf("no\n");
}
