int main()
{ int z,q,s,l;
  for (z=1;z<=5;z++)
   {
     for (q=1;q<=5;q++)
   {
      for (s=1;s<=5;s++)
   {
      for (l=1;l<=5;l++)
   {
      if (z+q==s+l)
	  {  
		  if(z+l>s+q)
	  {   
		if(z+s<q)
        printf("l %d\nq %d\nz %d\ns %d\n",l*10,q*10,z*10,s*10);
		  }
	  }
    }
    }
    }
    }
}