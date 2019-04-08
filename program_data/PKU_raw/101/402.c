int main()
{
  int i,j,k;
  int As,Bs,Cs;
  int Aans,Bans,Cans;
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      for(k=0;k<3;k++)
        {
		  if(!((i<=j&&As<=Bs)||(i<=k&&As<=Cs)||(j<=i&&Bs<=As)||(j<=k&&Bs<=Cs)||(k<=i&&Cs<=As)||(k<=j&&Cs<=Bs)))
			{  Aans=i;
		      Bans=j;
			  Cans=k;}
	  }
	  if((Aans>=Bans)&&(Bans>=Cans))
		  cout<<"ABC"<<endl;
	  if((Aans>=Cans)&&(Cans>=Bans))
		  cout<<"ACB"<<endl;
           if((Bans>=Aans)&&(Aans>=Cans))
		  cout<<"BAC"<<endl;
	  if((Bans>=Cans)&&(Cans>=Aans))
                    cout<<"BCA"<<endl;
           if((Cans>=Aans)&&(Aans>=Bans))
                    cout<<"CAB"<<endl;
           if((Cans>=Bans)&&(Bans>=Aans))
                    cout<<"CBA"<<endl;
return 0;
}
