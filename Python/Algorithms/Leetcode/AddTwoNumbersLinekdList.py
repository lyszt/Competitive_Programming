from typing import *
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def create_linked_list(lst: List[int]) -> ListNode:
    if not lst:
        return None
    head = ListNode(lst[0])
    current = head
    for value in lst[1:]:
        current.next = ListNode(value)
        current = current.next
    return head

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        numbers_left = []
        numbers_right = []
        while l1 is not None:
            numbers_left.append(l1.val)
            l1 = l1.next

        while l2 is not None:
            numbers_right.append(l2.val)
            l2 = l2.next

        print(numbers_left, numbers_right)

        # yes i will cheat the problem pythonically rip the boys
        n1 = int("".join([str(number) for number in numbers_left])[::-1])
        n2 = int("".join([str(number) for number in numbers_right])[::-1])

        sum = str(n1 + n2)[::-1]
        current_node = ListNode()
        head = current_node
        current_node.val = int(sum[0])
        for i in range(1, len(str(sum))):
            # print(sum[i])
            next_node = ListNode()
            next_node.val = int(sum[i])
            current_node.next = next_node
            current_node = current_node.next
        return head


l1in = create_linked_list([2, 4, 9])
l2in = create_linked_list([5, 6, 4, 9])
print(Solution().addTwoNumbers(l1in, l2in))