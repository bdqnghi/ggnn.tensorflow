
void bubble(int x[][2],int n)          //&Ecirc;&yacute;ื้&Atilde;ฐ&Aring;&Yacute; &pound;&not;n&Icirc;&ordf;&Ecirc;&yacute;ื้&sup3;ค&para;&Egrave;
{
    int i,j,y;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(x[j][1]>x[j+1][1])
            {
                y=x[j][0];
                x[j][0]=x[j+1][0];
                x[j+1][0]=y;
				y=x[j][1];
                x[j][1]=x[j+1][1];
                x[j+1][1]=y;
				
            }                  
        }                
    }     
} 

int main()
{
    int i,j,k,t,x[100][2],n=0;
	char s[150],a,b;

	scanf("%s",s);

	a=s[0];
	for(i=1;s[i];i++)
	{
	   if(s[i]!=a)
	   {
	       b=s[i];
		   break;
	   }
	}
	if(s[0]==a)
	{
	    for(j=0;s[j];j++)
		{
		   
     	    for(k=0;s[k];k++)
			{
			//	sign=0;
			   if(s[k]==a)
			   {
			       for(t=k+1;s[t];t++)
				   {
				       if(s[t]==b)
					   {
					       s[k]='a';
						   s[t]='a';
					       x[n][0]=k;
						   x[n][1]=t;
						   n++;
						   break;
					   }
					   else if(s[t]==a)
						   break;
				   }
			   }
			   

			}
			
		}
	}
/*	else
	{
	    for(j=0;s[j];j++)
		{
		   
     	    for(k=0;s[k];k++)
			{
			//	sign=0;
			   if(s[k]==')')
			   {
			       for(t=k+1;s[t];t++)
				   {
				       if(s[t]=='(')
					   {
					       s[k]='a';
						   s[t]='a';
						   printf("%d %d\n",k,t);
						   break;
					   }
					   else if(s[t]==')')
						   break;
				   }
			   }
			   

			}
			
		}
	}*/
 
	bubble(x,n);
	for(i=0;i<n;i++)
	{
	    printf("%d %d\n",x[i][0],x[i][1]);
	}

	return 0;
}