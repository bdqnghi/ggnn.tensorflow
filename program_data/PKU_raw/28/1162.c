void main()
{int i,j=0,k=0,p=0;
    char a[300][50];char c[15000];
    
    int b[300];
    gets(c);
   for(i=0;i<15000;i++)
   {if(c[i]!=32&&c[i]!=0)
   	{a[j][k]=c[i];
   		k++;
   	}
   	else
   	if(c[i]==32)
   	{ if(c[i+1]==32)
   		continue;
   		else
   		j++;k=0;p=p+1;}
   	else
   	break;
   }  
   for(i=0;i<=p;i++)
    b[i]=strlen(a[i]);
    
     for(i=0;i<=p-1;i++)
     printf("%d,",b[i]);
     printf("%d",b[p]);
}