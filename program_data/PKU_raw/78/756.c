
int main(){
  int z,q,s,l,t,num[4];
  char ch,name[4];
  for (int z = 1; z<= 5; ++z)
    for (int q = 1; q<=5; ++q)
      for (int s = 1; s<=5; ++s)
        for (int l = 1; l<=5; ++l)
          if ((z+q == s+l)&&(z+l > s+q)&&(z+s < q)){
                              num[0]=z; num[1]=q; num[2]=s; num[3]=l;
                              name[0]='z'; name[1]='q'; name[2]='s'; name[3]='l';
                              for (int i=0; i<4 ; ++i)
                                for (int j=i; j<4; ++j)
                                  if (num[j]>num[i]){ t =num[i]; num[i]=num[j]; num[j]=t;
                                                      ch=name[i]; name[i]=name[j]; name[j]=ch;
                                                     } 
                              for (int i=0; i<4; ++i)
                                cout << name[i] << " " << num[i]*10 << endl;
                              return 0;
                              }
}
