void main()
{
	char n[20],tab[100];
	int a,b,nlen,k,z[10];
	long d=0,i;
	scanf("%d%s%d",&a,n,&b);
     nlen=strlen(n);
    for(i=0;i<nlen;i++)
	  {
		if(n[i]>='0'&&n[i]<='9')
			z[i]=n[i]-48;
		else
			if(n[i]>='a'&&n[i]<='z')
				z[i]=n[i]-87;
	    else
			if(n[i]>='A'&&n[i]<='Z')
				z[i]=n[i]-55;
	  }

	   for(i=0;i<nlen;i++)
	   {
        k=pow(a,nlen-i-1);
		d=d+z[i]*k;
	   }
	   if(d==0)
		   printf("0");
	   else
	   {
       for(i=0;i<36;i++) 
	   { 
          if(d%b<=9) 
            tab[i]=d%b; 
            switch(d%b) 
			{ 
                 case 10:tab[i]='A';break; 
                 case 11:tab[i]='B';break; 
                 case 12:tab[i]='C';break; 
                 case 13:tab[i]='D';break; 
                 case 14:tab[i]='E';break; 
                 case 15:tab[i]='F';break; 
                 case 16:tab[i]='G';break; 
                 case 17:tab[i]='H';break; 
                 case 18:tab[i]='I';break; 
                 case 19:tab[i]='J';break; 
                 case 20:tab[i]='K';break; 
                 case 21:tab[i]='L';break; 
                 case 22:tab[i]='M';break; 
                 case 23:tab[i]='N';break; 
                 case 24:tab[i]='O';break; 
                 case 25:tab[i]='P';break; 
                 case 26:tab[i]='Q';break; 
                 case 27:tab[i]='R';break; 
                 case 28:tab[i]='S';break; 
                 case 29:tab[i]='T';break; 
                 case 30:tab[i]='U';break; 
                 case 31:tab[i]='V';break; 
                 case 32:tab[i]='W';break; 
                 case 33:tab[i]='X';break; 
                 case 34:tab[i]='Y';break; 
                 case 35:tab[i]='Z';break; 
			} 

           d/=b; 
	   } 
      for(i=35;i>=0;i--) 
         if(tab[i]!=0) 
          break; 

      for(;i>=0;i--) 
	  { 
       if(tab[i]>9) 
       printf("%c",tab[i]); 
         else 
      printf("%d",tab[i]); 
	  }
	   }
}
