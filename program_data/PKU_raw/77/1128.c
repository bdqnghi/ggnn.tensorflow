void f(char a[],int n,char x,char y)
{
     int i,j,k=1;
     for(i=0;i<n;i++)
     {           
        if(a[i]==y)
            for(j=i;j>=0;j--)
                if(a[j]==x)
                {
                      printf("%d %d",j,i);
                      a[i]=0;
                      a[j]=0;
                      k+=2;
                      if(k<n) printf("\n\n");
                      break;
                }
     }
}


int main()
{ 
     char a[100],x,y;
     int i,n;
     gets(a);
     n=strlen(a);
     x=a[0];
     for(i=0;i<n;i++)
        if(a[i]!=x)  y=a[i];
     f(a,n,x,y);
     
}
