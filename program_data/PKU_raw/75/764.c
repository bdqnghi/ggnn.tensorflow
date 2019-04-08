int main()
{

	char s[4000];
	int a[1001],b[1001],i=0,j=0,num=0,t1=2000,t2=0;
	memset(s,'\0',sizeof(s));
	cin.getline(s,4000);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=',')
		{
			num=num*10+s[i]-'0';
		}
		else{
			a[j]=num;
			if(t1>a[j]) t1=a[j];
			num=0;j++;
		}
	}
	a[j]=num;
				if(t1>a[j]) t1=a[j];
				num=0;
				j=0;
   cin.getline(s,4000);
   for(i=0;i<strlen(s);i++)
   	{
   		if(s[i]!=',')
   		{
   			num=num*10+s[i]-'0';
   		}
   		else{
   			b[j]=num;
   			if(t2<b[j]) t2=b[j];
   			num=0;j++;
   		}
   	}
   	b[j]=num;
   				if(t2<b[j]) t2=b[j];
   				num=0;
   int ren=0;
   double d=t1+0.5;
  while(d<t2)
   {int cou=0;
       for(int p=0;p<=j;p++)
    	   if(d>a[p]&&d<b[p])
    		   cou++;

       if(cou>ren) ren=cou;
       d+=1;
   }
   cout<<j+1<<" "<<ren;
   return 0;
}