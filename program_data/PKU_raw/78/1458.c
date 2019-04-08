int main()
{
    int z,q,s,l;
    int a[4],i,j,k;
    char b[4],h;                   //k,h??????i,j????? 
    for(z=1;z<=5;z++)
     for(q=1;q<=5;q++)
      for(s=1;s<=5;s++)
       for(l=1;l<=5;l++)           //?????????? 
        if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)  //???????? 
        {
         a[0]=z*10; b[0]='z';
         a[1]=q*10; b[1]='q';
         a[2]=s*10; b[2]='s';
         a[3]=l*10; b[3]='l';
        }                          //??????????????? 
    for(i=0;i<3;i++)
     for(j=0;j<3-i;j++)
      if(a[j]<a[j+1])
       {k=a[j];
        a[j]=a[j+1];
        a[j+1]=k;
        h=b[j];
        b[j]=b[j+1];
        b[j+1]=h;
       }                        //????????????????????? 
  for(i=0;i<4;i++)
  cout<<b[i]<<" "<<a[i]<<endl;  //?? 
  return 0; 
}