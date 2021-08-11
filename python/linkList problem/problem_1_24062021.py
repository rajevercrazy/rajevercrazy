'''
3. Given link list:
case:
l1 = 1->2->3->4->5
k=2 
result = 2->1->4->3->5
if k=3:
result = 3->2->1->4->5
Value in link list should not change, reversed the L1 list do not create new link list.

4. Some problem as question 3 but reversed the alternet k group?

5. You have a link list with each having a next and a random pointer. It point any node random pointer(It points to any node randomly).
Prepare a copy of the linked list?
Note: As if we copy random point then it will point to origanal list node not copied node.
'''
class node:
    def __init__(self,data):
        self.data = data 
        self.next = None 

class linkList:
    head = None
    def insert_fornt(self,data):
        elm = node(data)
        if(self.head == None):
            self.head = elm
        else:
            elm.next = self.head
            self.head = elm

    def insert_back(self,data):
        elm = node(data)
        if(self.head == None):
            self.head = elm
        else:
            temp = self.head
            while(temp.next != None):
                temp = temp.next
            temp.next = elm
        
    def display(self):
        if(self.head != None):
            elm = self.head 
            while(elm.next != None):
                print(elm.data,end='->')
                elm = elm.next 
            else:
                print(elm.data)
        else:
            print("List is empty")

def rearrange(ll,k):
    pass
if __name__ == "__main__":
    num = int(input("How many element: "))
    ll = linkList()
    while(num>0):
        elm = input()
        ll.insert_back(elm)
        num -= 1
    ll.display()
