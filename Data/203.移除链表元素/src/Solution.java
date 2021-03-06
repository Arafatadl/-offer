/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeElements(ListNode head, int val) {
        ListNode dummyHead=new ListNode(-1);
        dummyHead.next=head;
        ListNode prev = dummyHead;
        while (head!=null){
            if (prev.next.val==val)
                prev.next=prev.next.next;
            else
                prev=prev.next;
        }
        return dummyHead.next;
    }
}