



void dna()

{

     int i;

     char str[255];

     gets(str);

     for(i=0;i<strlen(str);i++)

       {

       if(str[i]=='A')

         str[i]='T';

       else if(str[i]=='T')

         str[i]='A';

       else if(str[i]=='C')

         str[i]='G';

       else if(str[i]=='G')

         str[i]='C';

       }

     puts(str);

}




main()

{

      int a,i;

      scanf("%d",&a);

      getchar();

      for(i=0;i<a;i++)

        dna();

} 

