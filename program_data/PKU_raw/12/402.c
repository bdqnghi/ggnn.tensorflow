int main(){
int a[15];
while(cin)
{int temp,num=0,i=0,j=0,k=0;
 for(i=0;cin>>a[i];i++)
 if(a[i]==-1)
 return 0;
 else if(a[i]==0)
{for(j=1;j<i;j++)
 for(k=0;k<i-j;k++)
 if(a[k]>a[k+1])
 {temp=a[k];
 a[k]=a[k+1];
 a[k+1]=temp;
 }
for(j=0;j<i;j++)
for(k=j+1;k<i;k++)
if(a[j]*2==a[k])
num++;
cout<<num<<endl;
num=0;
break;}
}

}


