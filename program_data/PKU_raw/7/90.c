int main()
{
	int i,j,a,b,c,m,d,k,v=0;
	char str[100],substr[100],rep[100];
	scanf("%s%s%s",str,substr,rep);
	a=strlen(str);
	b=strlen(substr);
	for(i=0;i<a;i++)
	{
	       k=i;
		   if(substr[0]==str[k])
		   {
			   d=0;
			   for(j=i+1,m=1;j<i+b;j++,m++)
			   {
				   if(substr[m]==str[j])
					   d++;
			   }

				   if(d==b-1)
					   for(j=i,c=0;j<i+b;j++,c++)
					   {
						   str[j]=rep[c];
						   v=1;
						  
					   }
					   
		   }
		   if(v==1)
			   break;
	} printf("%s",str);
	return 0;
}