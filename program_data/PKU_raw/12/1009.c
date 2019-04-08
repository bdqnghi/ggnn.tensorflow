
int main(int argc, char* argv[])
{
	int x[16],a,b,i,k;
    
	while (1) 
	{


    for (i=0;i<16;i++) 
	{
	 scanf ("%d",&x[i]);
	  if (x[i]==0) 
	  {
	   a=i;
	   break;
	 
	  }
	 
	}
    if (x[0]==-1)
	 {
	 
	 break;
	 
	 }
    int s=0;
    for (k=0;k<a;k++) 
	{
	  for (i=0;i<a;i++) 
	  {
	  if (x[k]==2*x[i]) 
	  {
	  s++;
	  }
	  
	  }
	
	} 
    printf ("%d\n",s);
    }

	return 0;
}
