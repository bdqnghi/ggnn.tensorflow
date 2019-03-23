public void shellSort(){
        int n = a.length;
        /*�������򣺷���Ĺ���
         * 1.d = ���鳤��/2;
         * 2.d = d/2;
         * 
         */
        for(int d=n/2;d>0;d/=2){
//          System.out.println("d="+d+"ʱ���������");
            //��������
            for(int i=0;i<d;i++){ //����Ϊ1ʱ�������
                //������������
//              System.out.print(i+"\t");
                for(int j=i+d;j<n;j+=d){
//                  System.out.print(j+"\t");
                    //��ÿ��������в�������
                    int insertNode = a[j];
                    int k=j-d;
                    while(k>=i&& a[k]>insertNode){
                        a[k+d]=a[k];
                        k=k-d;
//                      print();
                    }
                    a[k+d]=insertNode;
//                  print();
                }
//              System.out.println("--------------------");
                
            }
//          print();
        }
        print();
    }