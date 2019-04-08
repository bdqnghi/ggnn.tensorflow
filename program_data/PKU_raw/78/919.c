int main()
{
 	int z,q,s,l,i,j,k;
 	int a[5]={0};
 	char b[5]={'d','z','q','s','l'};
 	for (z=1;z<=5;z++)
 	{
	 	for (q=1;q<=5;q++)
		{
		 	for (s=1;s<=5;s++)
 			{
			 	for (l=1;l<=5;l++)
				{
				 	if ( ( ((z+q)!=(s+l)) + ((z+l)<=(s+q)) + ((z+s)>=q) )==0) 
					 {	a[1]=10*z;a[2]=10*q;a[3]=10*s;a[4]=10*l;
					   	 for (i=1;i<=3;i++)
			 	 		 {
						  	 for (j=4;j>i;j--)
							   {if  (a[j-1]<a[j]) 
							   		{
							   		a[0]=a[j-1];
							   		a[j-1]=a[j];
							   		a[j]=a[0];
							   		b[0]=b[j-1];
							   		b[j-1]=b[j];
							   		b[j]=b[0];
							   		
							   }		   	 
						
							   }
	   					 }
					 }
				
				}
			}
		}
	}	
for (i=1;i<=4;i++)
{
 	cout<<b[i]<<" " <<a[i]<<endl;
}

} 
