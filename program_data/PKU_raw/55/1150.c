int main()
{int a,b,num;
int i=1,j=1,k=1,count=0;
long sum=0;
long sum1;
char n[100];
for(k=0;k<100;k++)
{n[k]='\0';                  
                  }
cin>>a>>n>>b;
for(count=0;count<100;count++)
{if(n[count]=='\0')
{num=count;
break;
}
}
     int shu[num];
for(i=0;i<num;i++)  
{shu[i]=n[i];
if(shu[i]<58)
shu[i]=shu[i]-48;
else if(shu[i]<91)
shu[i]=shu[i]-55;
else
shu[i]=shu[i]-87;
                     }  
for(i=0;i<num;i++)
{
                  sum=sum+shu[i]*(long)pow((double)a,(double)(num-i-1));
                   }
                   sum1=sum;
for(i=1;i<100;i++)
{sum1=sum1/b;
if(sum1==0)
{break;}                  
                  }
long shu1[i];   
for(j=0;j<i;j++)
{shu1[j]=sum%b;
sum=sum/b;
}
char m[i];
for(j=0;j<i;j++)
{if(shu1[i-j-1]<10)
m[j]=shu1[i-j-1]+48;
else
m[j]=shu1[i-j-1]+55;
cout<<m[j];
}
return 0;
    }
