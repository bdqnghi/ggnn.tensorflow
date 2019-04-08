
void main(){

    int a[MAX];

	int n,m,i,temp;




	int flag,istart,iend,length;

        	scanf("%d%d",&n,&m);
	//????
	for(i=0;i<n;i++)
		 scanf("%d",&a[i]);

	  
	temp=n-m;
	if(n-m>m) 
	{
		flag=0;/*<------*/
		length=m;
		istart=0;
		iend=n-1;
	}
	else
	{
		flag=1; /*----->*/
		length =n-m;
		istart=0;
		iend=n-1;
	}


	while (length>1) {


         /*
		 ??a[temp....temp+
		 swap(a,startpos,length);
		 */
		if( flag==0 ) 
		{
			 i=iend-length-length+1;
			 for(;i<iend-length+1;i++)
			 {
			   //???2*length

			   temp=a[i];
			   a[i]=a[i+length];
			   a[i+length]=temp;

			 }
			 iend=iend-length;


			 /*??????????*/

			 if(iend-length+1<= istart+length-1)

			 {
				 flag=1;
				 length=iend-length+1-istart;
			 }

		} else {/**flag==1**/

             i=istart;
			 for(;i<istart+length;i++)
			 {
			   //???2*length

			   temp=a[i];
			   a[i]=a[i+length];
			   a[i+length]=temp;

			 }
			 istart=istart+length;

			 /*??????????*/
			 if(iend-length+1<= istart+length -1)

			 {
				 flag=0;
				 length=iend-length+1-istart;
			 }


		}

		 
        

	




	} //end while



 	if(length==1)

	{
 
		if(flag==0){
              temp=a[iend];
			  for(i=iend;i>istart;i--)
			  {
                a[i]=a[i-1];
			  }
			  a[istart]=temp;

		} else {
               temp=a[istart];
			  for(i=istart;i<iend;i++)
			  {
                a[i]=a[i+1];
			  }
			  a[iend]=temp;

		}

	}

	for(i=0;i<n-1;i++)
		 printf("%d ",a[i]);

            
	printf("%d",a[i]);














}