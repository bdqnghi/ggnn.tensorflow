int main()
{
    char s1[101],s2[101];
    int num1[101],num2[101];
    int n,i,j,k,q,h,f,len1,len2;
    cin>>n;
   while(cin>>s1>>s2)
    {
         memset(num1,0,sizeof(num1));
	memset(num2,0,sizeof(num2));
         i=0;
	j=0;
	k=0;
	q=0;
         
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=len1-1;i>=0;i--)
    num1[j++]=s1[i]-'0';//??????????
    
	for(k=len2-1;k>=0;k--)
    num2[q++]=s2[k]-'0';
    for(h=0;h<len1;h++)
      {
         
         num1[h]=num1[h]-num2[h];
        
			if(num1[h]<0)//????????=???
          {
           num1[h]=num1[h]+10;
           num1[h+1]=num1[h+1]-1;
            }
      }
	 f=len1;
      while(num1[f]==0)
		  f--;
       for(;f>=0;f--)
       
		   cout<<num1[f];
       
        cout<<endl;
     }
return 0;
}
 
 


