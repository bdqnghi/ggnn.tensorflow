void main()
{

       int n,k,c;
       char string[500][300];
	     int  i,d1,d2,d;
          char str[2][300];
		  	char t[10];
       scanf("%d",&n);
 
 for (k=0;k<n;k++)
       {
			

			 	gets(t);          //??????????gets(t)???????????????
               for (i=0;i<2;i++)
               {
                       gets(str[i]);
                       
               }
              
                d1=strlen(str[0]);
                d2=strlen(str[1]);
			 
                d=d1-d2;
                for (i=0;i<d2;i++)    //???????d2???d1
       str[1][d1-1-i]= str[1][d2-1-i];

		
        for (i=0;i<d;i++)
                str[1][i]='0';
        str[1][d1]='\0';

 
	    c=0;
		for (i=d1-1;i>=0;i--) {         //??????????????????????????????
			int k1 = (int)(str[0][i]-'0');  //?????????????????
			int k2 = (int)(str[1][i]-'0');
			if ((k1-c)<(k2)) {
				string[k][i]= (char)((k1 +10 - c - k2) + 48);
				c=1;
			}else {
				string[k][i]=  (char)((k1 - c - k2) + 48);
				c=0;
			}
		}
          string[k][d1]='\0';
 

       }

   for (k=0;k<n;k++)

    printf("%s\n",string[k]);
}