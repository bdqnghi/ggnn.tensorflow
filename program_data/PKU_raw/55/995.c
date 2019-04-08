/*
 * ????
 * ???1000010549
 * ?????
 * ???2010-11-13
 */
int main()
{
	double a,n1[10000],sum1;                               //??????
	int i,j,b,sum2,k1,k2,la,s[1000];
	char l[10000],n[10000],n2[10000],a1[2],b1[2];
	cin.getline(l,10000);                                  //?????
	i=0;
    while (l[i]!=' ')                                      //??????n????
    {
    	a1[i]=l[i];
    	i++;
    }
    la=i;
    i=i+1;
    k1=0;k2=0;
    while (l[i]!=' ')                                      //??????????
    {
    	n[k1]=l[i];
    	i++;
    	k1++;
    }
    i=i+1;
    while (l[i]!='\0')                                     //????????
    {
    	b1[k2]=l[i];
    	i++;
    	k2++;
    }
    if (la==1)                                            //????????
    	a=(int)a1[0]-48;
    else
    	a=((int)a1[0]-48)*10+(int)a1[1]-48;
    if (k2==1)
    	b=(int)b1[0]-48;
    else
        b=((int)b1[0]-48)*10+(int)b1[1]-48;
	for(i=0;i<k1;i++)                                     //????????????
	{
		if ('a'<=n[i]&&n[i]<='z')
		{
		n[i]=n[i]-32;
		}
	}
	sum1=0;
	for(i=0;i<k1;i++)
	{
		if('0'<=n[i]&&n[i]<='9')
		{
			n1[i]=(int)(n[i])-48;
			sum1=sum1+n1[i]*pow(a,k1-i-1);
		}
		else
		{
			n1[i]=(int)(n[i])-55;
			sum1=sum1+n1[i]*pow(a,k1-i-1);
		}
	}
	sum2=(int)sum1;
	if (b==10)                                        //?????????????
		cout<<sum2<<endl;
	else if (b<10)                                    //??????????
	{
	 for(i=0;i<1000;i++)
		s[i]=1;
	 i=0;
	 while (sum2>=b)
	 {
		s[i]=sum2%b;
		sum2=(sum2-s[i])/b;
		i++;
	 }
	 cout<<sum2;
	 for(j=i-1;j>=0;j--)
		cout<<s[j];
	}
	else if (10<b&&b<=36)                              //????11?36???
	        {
	          for(i=0;i<1000;i++)
		         s[i]=1;
	          i=0;
	          while (sum2>=b)
	             {
		            s[i]=sum2%b;
		            sum2=(sum2-s[i])/b;
		            if(s[i]<10)
			           {n2[i]='0'+s[i];}
		            else
			           {n2[i]='A'+s[i]-10;}
		            i++;
	             }
	          if(sum2<10)
	 	         {n2[i]='0'+sum2;}
	          else
	 	         {n2[i]='A'+sum2-10;}
              for (j=i;j>=0;j--)
                  {cout<<n2[j];}
	        }
	return 0;
}
