
void main()
{
   int pm[5],bj[5];
   int i,j,k,m,n,t,counter=0;
   for(i=0;i<5;i++)
   {
       pm[i]=1;bj[i]=1;
	   for(j=0;j<5;j++)
	   {
		   if(j==i) continue;
		   pm[j]=2;bj[j]=1;
		   for(k=0;k<5;k++)
		   {
               if(k==i||k==j) continue;
			   pm[k]=3;bj[k]=0;
			   for(m=0;m<5;m++)
			   {
				   if(m==i||m==j||m==k) continue;
				   pm[m]=4;bj[m]=0;
                   for(n=0;n<5;n++)
				   {
                         if(n==i||n==j||n==k||n==m) continue;
						 pm[n]=5;bj[n]=0;
						 t=0;
                         if(pm[4]!=2&&pm[4]!=3) t++;
						 if((bj[0]==1&&pm[4]==1)||(bj[0]==0&&pm[4]!=1)) t++;
						 if((bj[1]==1&&pm[1]==2)||(bj[1]==0&&pm[1]!=2)) t++;
						 if((bj[2]==1&&pm[0]==5)||(bj[2]==0&&pm[0]!=5)) t++;
						 if((bj[3]==1&&pm[2]!=1)||(bj[3]==0&&pm[2]==1)) t++;
						 if((bj[4]==1&&pm[3]==1)||(bj[4]==0&&pm[3]!=1)) t++;
						 if(t==6) printf("%d %d %d %d %d\n",pm[0],pm[1],pm[2],pm[3],pm[4]);
						 
					     counter++;
						 
				   }
			   }
		   }
	   }
   }
  
}