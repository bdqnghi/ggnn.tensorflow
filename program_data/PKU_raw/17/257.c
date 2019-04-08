int main()
{	
   char str1[100][100],str2[100][100]={'\0'};	
   int i,j,k,l1,l2,t[100],l;	
   for(i=0;i<100;i++)	
   {   scanf("%s",str1[i]);
       k=strlen(str1[i]);
	   if(k==0) break;
       puts(str1[i]);
       l1=0;l2=0;		
       for(j=0;j<k;j++)	
       {if(str1[i][j]==')') {t[l2]=j;l2++;}}	
       for(l=0;l<l2;l++)	
       {	
           for(j=t[l];j>=0;j--)	
          {if(str1[i][j]=='(') {str1[i][t[l]]='A';str1[i][j]='A';break;}	}	
       }	
       for(j=0;j<k;j++)	
       {if(str1[i][j]=='(') str2[i][j]='$';	
       else if(str1[i][j]==')') str2[i][j]='?';	
       else str2[i][j]=' ';	
       }	
       puts(str2[i]);	
    }
   return 0;
}