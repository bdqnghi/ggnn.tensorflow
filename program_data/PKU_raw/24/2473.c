main()
{   int da,i,j,x,y,k,len,n,dan[201],max,min;
    char s[10000],a[201][50];
       gets(s);
       for(i=0;i<201;i++)
       dan[i]=0;
       i=0;
       len=strlen(s);
       while(i<len){
       if(s[i]!=' '&&s[i]!=',')
       {   a[0][i]=s[i];i++;
       }
       else break;
	   }
	   dan[0]=strlen(a[0]);
       x=i+1;j=1;y=0;
       while(x<len)
       {  if(s[x]!=' '&&s[x]!=',')
           {  dan[j]++;a[j][y]=s[x];y++;x++;
           } 
		   
            if(s[x]==','&&s[x+1]==' '){x=x+2;j++;y=0;
           }
           if((s[x]==' '||s[x]==',')&&(s[x+1]!=' '&&s[x+1]!=',')){x++;j++;y=0;
           }
       }
      k=j;
     
     max=dan[0];min=dan[0];
       for(j=1;j<=k;j++)
      if(dan[j]>max)
       max=dan[j];
     
       for(j=1;j<=k;j++)
       
       if(dan[j]<min)
       min=dan[j];
     
     if(k==1||max==min)
    {
    puts(a[0]);puts(a[0]);}
  
    else if(max>min){
     for(i=0;i<=k;i++)
     if(dan[i]==max) 
	 {
     puts(a[i]);break;
	 }
	 
     for(i=0;i<=k;i++)
     if(dan[i]==min) 
	 {
     puts(a[i]);break;
     }
}
}
     