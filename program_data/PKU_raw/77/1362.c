void main()
{int i,j,k,len;
 char x[100],a,b;
 scanf("%s", x);
 len=strlen(x);
 a=x[0];b=x[len-1];
 for (i=0;i<len/2;i++)
   {for (j=0;j<len;j++)
        if (x[j]==b)
			{for (k=j-1;x[k]!=a;k--);
             printf("%d %d\n",k,j);
			 x[j]='.';
			 x[k]='.';
			 break;
		    }    
   }
 
}