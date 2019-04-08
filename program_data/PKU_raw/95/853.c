void main()
{
   int i,a,b;
//==========??????????????===========
//   char ch1[10][80],ch2[10][80],max1[80],max2[80];
//   gets(ch1[0]);   
//   for(i=0;i<80;i++)
//   { if(ch1[i]!='\0')
//       gets(ch1[i]);
//   }
//   a=strlen(ch1);
//   gets(ch2[0]);
//   for(i=0;i<80;i++)
//   {   if(ch2[i]!='\0')
//       gets(ch2[i]);
//   }
//   b=strlen(ch2);
//   strcpy(max,ch[0]);
//======================================================
     char ch1[80],ch2[80];          // ????????
     gets(ch1);
     a=strlen(ch1);
     gets(ch2);
     b=strlen(ch2);
//====????????????????????????===
     for(i=0;i<a;i++) if(ch1[i]>='A'&& ch1[i]<='Z') ch1[i]=(ch1[i]+32);
     for(i=0;i<b;i++) if(ch2[i]>='A'&& ch2[i]<='Z') ch2[i]=(ch2[i]+32);
     if (strcmp(ch1,ch2)>0) printf("%c",'>'); 
     if (strcmp(ch1,ch2)<0) printf("%c",'<');
     if (strcmp(ch1,ch2)==0) printf("%c",'=');	  
}