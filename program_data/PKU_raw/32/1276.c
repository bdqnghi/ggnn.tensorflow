//**********************
//?????************
int main()
{ 
	int n;
	cin>>n;
	for(int times=1;times<=n;times++)
	{
             cin.get();
		     const int max=200;
		     char str1[max+1],str2[max+1];
			 long  an1[max]={0},an2[max]={0};
	         cin.getline(str1,max+1);
	         cin.getline(str2,max+1);
	         int la=strlen(str1);
	         int lb=strlen(str2);
	         memset(an1,0,sizeof(an1));
	         memset(an2,0,sizeof(an2));
			 int i=0,j=0;
	         for (i = la-1;i>=0; i--)
		        an1[j++] = str1[i] - '0';
			  j=0;
			 for (i = lb-1;i>=0;i--)
				 an2[j++] = str2[i] - '0';                            //??
			 for(i=0;i<max;i++)
	         {
				  an1[i]=an1[i]-an2[i];
                  if(an1[i]<0)
				  {
			        an1[i]=an1[i]+10;
			        an1[i+1]=an1[i+1]-1;
				  }
			 }                                                        //??
            i=max-1;
            while(an1[i]==0)
		     i--;
			for(;i>=0;i--)
             cout<<an1[i];
             cout<<endl;
	
      }                                                               //??

	return 0;

}

