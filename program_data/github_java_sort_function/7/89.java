    private void shellSort(){
        int h=1,inner,outter,temp;
        while(h<=curLoc/3){//h�Ǽ��,�ں���ļ����У�h��ֵ�ǲ����
            h=3*h+1;
        }
        while(h>0){
            for(outter = h;outter<curLoc;outter++){//outter���������ƶ�
                //a[outter]�Ǳ��Ԫ�أ��ڲ��������У����Ԫ���Ҳ��Ǵ������Ԫ��
                temp = a[outter];
                inner = outter;//innner>=h
                //inner>h-1��֤inner-h>0
                while(inner>h-1 && a[inner-h]>=temp){
                    a[inner] = a[inner-h];
                    inner -= h;
                }
                a[inner]=temp;//�ҵ����m��λ�ã�����
            }
            h=(h-1)/3;
        }
        
    }
    