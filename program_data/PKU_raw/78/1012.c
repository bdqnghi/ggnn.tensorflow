int main ()
{
  int z,q,s,l,a[4],t,i,j;
  char c[4]={'z','q','s','l'},y;
  for (a[0]=10;a[0]<60;a[0]+=10)
    for (a[1]=10;a[1]<60;a[1]+=10)
     for (a[2]=10;a[2]<60;a[2]+=10)
      for (a[3]=10;a[3]<60;a[3]+=10)
       if(a[0]+a[1]==a[2]+a[3]&&a[0]+a[3]>a[1]+a[2]&&a[0]+a[2]<a[1]) 
       {
           for (i=0;i<3;i++)
              for(j=0;j<3-i;j++)
              {  
                  if (a[j]<a[j+1])
                  {    t=a[j];a[j]=a[j+1];a[j+1]=t;
				  y=c[j];c[j]=c[j+1];c[j+1]=y; }
              }
           
          for (i=0;i<4;i++)
              cout<<c[i]<<" "<<a[i]<<endl;
         
        }
return 0;
}