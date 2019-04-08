void main()
{
    int changa,changb,n,i,j,k=0,c[20][100]={'\0'};
    char a[20][100]={'\0'},b[20][100]={'\0'},d[20][100]={'\0'};
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%s",a[i]);
        scanf("%s",b[i]);
        changa=strlen(a[i]);
        changb=strlen(b[i]);
        for(j=changa-changb;j<changa;j++)
        {
            d[i][j]=b[i][j-changa+changb];
        }    
        
        for(j=0;j<changa-changb;j++)
        {d[i][j]='0';}
                 
        for(j=changa-1;j>0;j--)
        {
            if (a[i][j]<48)
            { 
             a[i][j]=a[i][j]+10;
             a[i][j-1]=a[i][j-1]-1;
            }
            
            if(a[i][j]<d[i][j])
            {
            	a[i][j-1]=a[i][j-1]-1;            	
            	c[i][j]=(int)10+a[i][j]-d[i][j];
            }
            
            else
            {   
                c[i][j]=(int)a[i][j]-d[i][j];
            }              
        }  
        
        
        c[i][0]=(int)a[i][0]-d[i][0];
            
        for(j=0;j<changa;j++)
        {	if(c[i][j]!=0)
        	break;        	
        }
        
        for(k=j;k<changa;k++)
        printf("%d",c[i][k]);
        printf("\n");
      
    }
    
}