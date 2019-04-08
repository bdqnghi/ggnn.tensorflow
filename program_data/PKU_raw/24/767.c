int count(char*p)
{int n=0;
 for(;(*p!=' ')&&(*p);p++)n++;
 return n;
}
int main()
{ char a[500],min[500]={0},max[500]={0};
  int  i,j,n,mi=0,ma=0,k,x;
  gets(a);
  for(i=0;a[i]!=' ';i++)
  {
   mi++,ma++;
   min[i]=max[i]=a[i];
  }
  for(;a[i];i++)
  {
  if(a[i]==' ')
  {
	  k=count(&a[i+1]);
	  if(mi>k)
		{for(x=0;a[i+1+x]!=' '&&a[i+1+x];x++)
			min[x]=a[i+1+x];
	  min[x]='\0';
	  mi=k;}
	  if(ma<k)
		 {for(x=0;a[i+1+x]!=' '&&a[i+1+x];x++)
			max[x]=a[i+1+x];
	                 max[x]='\0'; 
	  ma=k;}
  }
  
  }

  puts(max);

  puts(min);
}
