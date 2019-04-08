int main()
{ int vol[3]={0},judge[3]={0},i,j,k,ri,rj;         //??vol?judge????????????????
  for(i=0;i<3;i++)
  {
	  for(j=0;j<3;j++)
	  {
		  for(k=0;k<3;k++)
		  {
			  vol[0]=i;vol[1]=j;vol[2]=k;
			  judge[0]=(vol[0]<vol[1])+(vol[2]==vol[0]);
			  judge[1]=(vol[0]>vol[1])+(vol[0]>vol[2]);
			  judge[2]=(vol[2]>vol[1])+(vol[1]>vol[0]);  //??????????

			  for(ri=0;ri<3;ri++)
			  {
				  for(rj=0;rj<3;rj++)
				  {
					  if( (vol[ri]>=vol[rj]) && (judge[ri]>judge[rj]) ) goto NextTime;  //?????????????????????????
				  }
			  }

			  for(ri=2;ri>=0;ri--)
			  {
				  for(rj=0;rj<3;rj++)
				  {
					  if(vol[rj]==ri) cout<<(char)(rj+65);  //?????????????????goto?????????
				  }
				  
			  }
			  goto endall ;

			  NextTime:  ;
		  }
	  }
  }
  endall: ;


	return 0;
}