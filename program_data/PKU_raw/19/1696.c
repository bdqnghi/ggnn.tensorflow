int main()
{
	char s[210]={0},a[100],b[100];int ls,la,i,j,k,g=0,lb;
        gets(s);cin>>a>>b;
        la=strlen(a);ls=strlen(s);lb=strlen(b);
     if(la<=ls)
            {
                        for(j=0;j<=ls-la;j++){   
                            if((j==0)||(s[j-1]<65))
{for(k=0;k<la;k++){if(a[k]==s[j+k])g++;}
                            if(g==la){if(lb>=la){for(i=ls+lb-la-1;i>=j+lb;i--)s[i]=s[i-lb+la];}
						        	  else {for(i=j+lb;i<ls+lb-la;i++)s[i]=s[i-lb+la];for(i=ls+lb-la;i<ls;i++)s[i]=0;}
									  for(i=0;i<lb;i++)s[i+j]=b[i];j=j+lb-1;}}
							g=0;ls=strlen(s);}}
                     ls=strlen(s);for(i=0;i<ls;i++) cout<<s[i];
         return 0;}
