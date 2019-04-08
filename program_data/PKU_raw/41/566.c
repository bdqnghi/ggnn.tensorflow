int main()
{
  int es[6],cc[6],i,A,B,C,D,E;
  for(es[1]=1;es[1]<=5;es[1]++)
	  for(es[2]=1;es[2]<=4;es[2]++)
	  {
	    if(es[1]==es[2])  continue;
		for(es[3]=1;es[3]<=4;es[3]++)
		{
		  if(es[3]==es[2]||es[3]==es[1])  continue;
		  for(es[4]=1;es[4]<=5;es[4]++)
		  {
			  if(es[4]==es[1]||es[4]==es[2]||es[4]==es[3])  continue;
		      for(es[5]=1;es[5]<=5;es[5]++)
			  {
			    if(es[5]==es[1]||es[5]==es[2]||es[5]==es[3]||es[5]==es[4])  continue;
				cc[1]=(es[1]==5);
				cc[2]=(es[2]==2);
				cc[3]=(es[5]==1);
				cc[4]=(es[1]!=3);
				cc[5]=(es[1]==4);
				if(cc[es[1]]&&cc[es[2]]&&cc[es[3]]==0&&cc[es[4]]==0&&cc[es[5]]==0)
				{
				  for(i=1;i<=5;i++)
				  {
				     switch(es[i])
					 {
					   case 1: A=i; break;
					   case 2: B=i; break;
					   case 3: C=i; break;
					   case 4: D=i; break;
					   case 5: E=i; break;
					 }
				  }
				  printf("%d %d %d %d %d\n",A,B,C,D,E);
				  return 0;
				}
			  }
		  }
		      
		}
	  }
}