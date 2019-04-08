
int main()
{
    int i,j=0,a=(-1),x,s,t,e,w;
    int y[100];
    char v[100][20],A[20];
    char z[2000];
    gets(z);
    x=strlen(z);
    for(i=0;i<x;i++)
    {
                  if((z[i]==' '&&z[i+1]!=' ')||(i==0&&z[i]!=' '))
                  {
                             a++;
                            
                  }
                 if(z[i]==' ')
                 {
                            j=0;
                 }
                 else
                 {
                     j++;
                     v[a][j-1]=z[i];
                     v[a][j]='\0';
                 }
                 if((z[i]!=' '&&z[i+1]==' ')||z[i+1]=='\0')
                 {
                              y[a]=j;
                 }
    }
    
     w=a+1;
     for(s=1;s<=w;s++)
   {
	for(t=0;t<w-s;t++)
    {
			if(y[t]<y[t+1])
            {
					e=y[t+1];
					y[t+1]=y[t];
					y[t]=e;
					strcpy(A,v[t+1]);
					strcpy(v[t+1],v[t]);
					strcpy(v[t],A);
			}
	}
   }
    printf("%s\n",v[0]); 
   for(s=1;s<=w;s++)
   {
	for(t=0;t<w-s;t++)
    {
			if(y[t]>y[t+1])
            {
					e=y[t+1];
					y[t+1]=y[t];
					y[t]=e;
					strcpy(A,v[t+1]);
					strcpy(v[t+1],v[t]);
					strcpy(v[t],A);
			}
	}
   }
    
    printf("%s",v[0]);
        return 0;
 }
