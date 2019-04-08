float kej(int fen);

void main()
{
      int i,n,xfen=0,xf[20],f[20];
	  float xj[20],zj=0;
	  scanf("%d",&n);
	  for(i=0;i<n;i++)
		  scanf("%d",&xf[i]);
	  for(i=0;i<n;i++)
		  scanf("%d",&f[i]);
	  
	  for(i=0;i<n;i++)
		  xfen=xfen+xf[i];
	  for(i=0;i<n;i++)
		  zj=zj+kej(f[i])*xf[i];
	  zj=zj/xfen;
	  printf("%.2f",zj);
	  
}

float kej(int fen)
{
	if(fen>=90&&fen<=100)
		return(4.0);
	else if(fen>=85&&fen<=89)
		return(3.7);
	else if(fen>=82&&fen<=84)
		return(3.3);
	else if(fen>=78&&fen<=81)
		return(3.0);
	else if(fen>=75&&fen<=77)
		return(2.7);
	else if(fen>=72&&fen<=74)
		return(2.3);
	else if(fen>=68&&fen<=71)
		return(2.0);
	else if(fen>=64&&fen<=67)
		return(1.5);
	else if(fen>=60&&fen<=63)
		return(1.0);
	else return(0);
}
