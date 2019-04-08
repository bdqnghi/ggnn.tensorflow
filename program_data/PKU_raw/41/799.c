int main()
{
 int a[6],c[6],flag=0;
 for (a[1]=1;a[1]<=5;a[1]++)
 {for (a[2]=1;a[2]<=5;a[2]++)
 {if (a[1]==a[2]) continue;
  for (a[3]=1;a[3]<=5;a[3]++)
 {if (a[1]==a[3]||a[2]==a[3]) continue;
 for (a[4]=1;a[4]<=5;a[4]++)
 {
 if (a[4]==a[1]||a[4]==a[2]||a[4]==a[3]) continue;
 for (a[5]=1;a[5]<=5;a[5]++)
 { if (a[5]==a[1]||a[5]==a[2]||a[5]==a[4]||a[5]==a[3]) continue;
 c[1]=(a[5]==1);
 c[2]=(a[2]==2);
 c[3]=(a[1]==5);
 c[4]=(a[3]!=1);
 c[5]=(a[4]==1);
 
 if ((a[5]!=2&&a[5]!=3)&&((c[1]+c[2]+c[3]+c[4]+c[5])==2))
    {
         flag=0;
         for (int i=1;i<=5;i++)
         {if ((a[i]==1&&c[i]==1)||(a[i]==2&&c[i]==1))
            flag++;
         }
         if (flag==2)
         {
          for (int i=1;i<=4;i++)
          cout<<a[i]<<" ";
           cout<<a[5];
         }
    }


}
}
}
}
}
 
 return 0;
 
}

    
