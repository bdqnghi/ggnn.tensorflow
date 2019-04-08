int main()
{
  int a[5],i,j,t;
  char c[5],d;
  c[1]='z';
  c[2]='q';
  c[3]='s';
  c[4]='l';
  for(a[2]=4;a[2]<6;a[2]++)
  {
     for(a[1]=1;a[1]<a[2]-1;a[1]++)
	 {
		 for(a[3]=1;a[3]<a[2]-a[1];a[3]++)
		 {
			 c[1]='z';
             c[2]='q';
             c[3]='s';
             c[4]='l';
		   if(a[3]==a[1]) continue;
		   else
		   {
			   a[4]=a[1]+a[2]-a[3];
			 
			 if(a[4]==a[2]||a[4]==a[3]||a[4]==a[1]) continue;
			 else if(a[1]+a[4]>a[2]+a[3]&&a[4]>0&&a[4]<6)
			 {
			    for(i=1;i<4;i++)
				{
					for(j=4;j>i;j--)
					{
					   if(a[i]<a[j])
					   {
					   t=a[i];a[i]=a[j];a[j]=t;
					   d=c[i];c[i]=c[j];c[j]=d;
					   }
					}
				}
			 for(i=1;i<5;i++)
			 {
			 cout<<c[i]<<' '<<a[i]*10<<endl;
			 
			 }
			 }
			 
			 
		   
		   }
		 }
	 }
	 break; }                                          //??????????break?????????l,q,z,s???

return 0;

}