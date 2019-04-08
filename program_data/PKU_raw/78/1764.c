int main()
{
    int z,q,s,l,a[4],i,p,j;
    memset(a,0,sizeof(0));
    for(z=10;z<=50;z+=10)
    { 
     for(q=10;q<=50;q+=10)
      {
       for(s=10;s<=50;s+=10)
        {
         for(l=10;l<=50;l+=10)
         {
             
         if(z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l&&z+q==s+l&&z+l>s+q&&z+s<q)
         {
            a[0]=z;
            a[1]=q;
            a[2]=s;
            a[3]=l;
         }
        }
       }
      }
     }
            z=a[0];
            q=a[1];
            s=a[2];
            l=a[3];
       for(j=1;j<=3;j++)
       {
           for(i=0;i<=3-j;i++)
           {
              if(a[i]<a[i+1])
              {
                  p=a[i];
                  a[i]=a[i+1];
                  a[i+1]=p;
              }
           }
       }
           if(a[0]==z)
           cout << "z " << z << endl;
           if(a[0]==q)
           cout << "q " << q << endl;
           if(a[0]==s)
           cout << "s " << s << endl;
           if(a[0]==l)
           cout << "l " << l << endl;
           if(a[1]==z)
           cout << "z " << z << endl;
           if(a[1]==q)
           cout << "q " << q << endl;
           if(a[1]==s)
           cout << "s " << s << endl;
           if(a[1]==l)
           cout << "l " << l << endl;
           if(a[2]==z)
           cout << "z " << z << endl;
           if(a[2]==q)
           cout << "q " << q << endl;
           if(a[2]==s)
           cout << "s " << s << endl;
           if(a[2]==l)
           cout << "l " << l << endl;
           if(a[3]==z)
           cout << "z " << z << endl;
           if(a[3]==q)
           cout << "q " << q << endl;
           if(a[3]==s)
           cout << "s " << s << endl;
           if(a[3]==l)
           cout << "l " << l << endl;
return 0;
}
            
             
            
          
