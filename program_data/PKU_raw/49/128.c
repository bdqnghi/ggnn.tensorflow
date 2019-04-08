void find(char sen[],char t[],int j,int i);
void trans(char t[],char tt[]);
int main()
{
   char sen[501],t[500],tt[500];
   int i=2,j,len,p,s,len1;
   cin>>sen;
   len=strlen(sen);
   
   while(i<=len)//i??????,j?????? 
   {
	   j=0;
	   while(j<=len-i)
	   {
		   p=1;
	      find(sen,t,j,i);
          
		  
		  trans(t,tt);
		  
		  for(s=1;s<=i;s++)
		  {
		     if(t[s]!=tt[s])
			 {
				 p=0;break;
			 }
		  }

		  if(p==1)
		  {
			  
			  
			  for(s=1;s<=i;s++)
			  {
				  if(s!=i)
				  {
					  cout<<t[s];
				  }
				  else
				  {
					  cout<<t[s]<<endl;
				  }
			  }
		  }
	   
	    j++;
	   }
   
	   i++;

   }
   return 0;

   
   






}
void find(char sen[],char t[],int j,int i)//??????
{
   int k,n;
   for(k=j,n=1;k<=j+i-1;k++,n++)
   {
	   t[n]=sen[k];
   }
   t[n]='\0';
}
void trans(char t[],char tt[])//??????????????
{
     int k,n,len;
	 len=strlen(t);
	 for(k=1,n=len-1;k<=len-1;k++,n--)
	 {
         tt[n]=t[k];
	 }
	 tt[len]='\0';
}










