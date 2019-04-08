int a[8][8];
void main()
{int i,j,hang,lie,b,d,max;
 int panduan(int i,int j,int hang);
 scanf("%d,%d",&hang,&lie);
 for(i=0;i<=hang-1;i++)
	{for(j=0;j<=lie-1;j++)
		{scanf("%d",&a[i][j]);
		}
	}
 for(i=0;i<=hang-1;i++)
    {max=a[i][0],b=0;
     for(j=1;j<=lie-1;j++)
        {if(a[i][j]>max)
        	{max=a[i][j];
        	 b=j;
        	}
        }
     d=panduan(i,b,hang);
     if(d)
       {printf("%d+%d",i,b);
       	break;
       }
     if(i==hang-1&&d==0)
       printf("No");
    }   
}


int panduan(int i,int j,int hang)
{int k,min,d=0;
 min=a[0][j];
 for(k=1;k<=hang-1;k++)
    {if(a[k][j]<min)
    	min=a[k][j];
    }
 if(a[i][j]==min)
   d=1;
 return(d);
}
 