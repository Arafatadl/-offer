package com.leetcode.problem;

public class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }

    public ListNode reverseList(ListNode head){
        ListNode cur=head;
        ListNode pre=head.next;
        cur.next = null;
        while (cur!=null) {
            ListNode next = cur;
            cur = pre;
        }
        return cur;
    }
}