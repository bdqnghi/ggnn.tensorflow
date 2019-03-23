package com.level4;


public class Insertionsort {

    public ListNode insertionSortList(ListNode a) {

        if(a==null || a.next==null){
            return a;
        }
        ListNode head=a,tmp=a.next;

        while(tmp!=null) {
            ListNode localtmp = a, prev = null;
            ListNode nxt  = tmp.next;
            ListNode hold=null;
            int isIMd = 0;
            while (localtmp != tmp) {

                if (localtmp.val > tmp.val) {
                    if (localtmp.next == tmp) {
                        isIMd = 1;
                    }else{
                        isIMd=2;
                    }
                    hold = tmp.next;
                    tmp.next = localtmp;
                    if (prev != null) {
                        prev.next = tmp;
                    }else {
                        a=tmp;
                    }
                    break;
                }
                prev = localtmp;
                localtmp = localtmp.next;
            }
            if (isIMd==1) {
                localtmp.next = hold;
            } else if(isIMd==2) {
                while (localtmp != null && localtmp.next != tmp) {
                    localtmp = localtmp.next;
                }
                if (localtmp != null) {
                    localtmp.next = hold;
                }
            }
            tmp=nxt;
        }
        return a;

        }

}
