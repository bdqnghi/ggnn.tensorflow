int main(){
	int z,q,s,l,a[4],i,j,b[4];
	char c[4];
	for(z=1;z<=5;z++)
		{for(q=1;q<=5;q++)
			{for(s=1;s<=5;s++)
			    {for(l=1;l<=5;l++)
			    {if((z!=q)+(z!=s)+(z!=l)+(q!=s)+(q!=l)+(s!=l)+(z+q==s+l)+(z+l>s+q)+(z+s<q)==9)
			    {a[1]=z*10;a[2]=q*10;a[3]=s*10;a[4]=l*10;
			    for(i=1;i<=4;i++)
			        	b[i]=a[i];
			        c[1]='z';c[2]='q';c[3]='s';c[4]='l';
			    	for(i=1;i<=3;i++)
			        	{for(j=1;j<=4-i;j++)
			        		{if(a[j]<a[j+1])
			        			{int temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
			        		}
			        	}
			        for(i=1;i<=4;i++)
			        	{for(j=1;j<=4;j++)
			        	    {if(a[i]==b[j])
			        	    	cout<<c[j]<<" "<<b[j]<<endl;
			        	    }
			        	}
			    }
			    }
			    }
			}
		}
    return 0;
    	}