int main()
{  int pai(int a[5]);
   int a[5],i,j,k,l,m,t;
   for(i=1;i<=5;i++)
   { a[0]=i;
     for(j=1;j<=5;j++)
      {a[1]=j;
       for(k=1;k<=5;k++)
	    {a[2]=k;
		  for(l=1;l<=5;l++)
		   {a[3]=l;
		     for(m=1;m<=5;m++)
		      {a[4]=m;
			  if(pai(a)==1)
			    {for(t=0;t<5;t++)
				   {printf("%d",a[t]);
				     if(t<4) printf(" ");
				   }
				   break;
				   
				}
			  }
		   }
		}	  
	  }
   }

	return(0);
}
int pai(int a[5])
{ int num=0,i,j;
  for(i=0;i<5;i++)
  { for(j=i+1;j<5;j++)
      { if(a[i]==a[j])
          return(0);
			}
		}
	if(a[4]!=2&&a[4]!=3) 
	{if(a[4]==1)
	{ if(a[0]==2)
	   num++;
	   else 
	   return(0);
		}
	 if(a[1]==2)
	 { if(a[1]==2)
	     num++;
	     else
	     return(0);
			}
	 if(a[0]==5)
	 { if(a[2]==1||a[2]==2)
	     num++;
	    else
	     return(0);
			}
	 if(a[2]!=1)
	 { if(a[3]==1||a[3]==2)
	    num++;
	    else
	     return(0);
			}	    
		}
	 if(a[3]==1)
	 { if(a[4]==2)
	     num++;
	     else
	     return(0);
			
			}
   if(num==2)
     return(1);
  return(0);
  
  
	
}