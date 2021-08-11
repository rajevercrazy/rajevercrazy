class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.pre = None
        
class DLL:
    def __init__(self):
        self.head = None 
        self.tail = None 

    def insert(self,data):
        node =  Node(data)
        if(self.head == None):
            self.head = node 
            self.tail = node 
        else:
            self.head.pre = node 
            node.next = self.head 
            self.head = node 
        return node 
    
    def delete(self,node = None):
        data = None 
        if(node == None):
            if(self.head != None):
                data = self.tail.data
                self.tail = self.tail.pre 
        else:
            data = node.data
            node.pre.next = node.next 
            node.next.pre = node.pre 
        
        return data

    def display(self):
        node = self.head 
        if(self.head != None):
            while(node.next != None):
                print(node.data, end='<->')
                node = node.next 
            else:
                print(node.data)
        else:
            print("Empty")

class Cache:
    def __init__(self, size):
        self.__size = size
        self.__keyMap = {}
        self.__addressMap = {}
        self.__freqMap = {}
        self.__minFreq = 0
    
    def get(self,data):
        try:
            count = self.__keyMap[data][1]
            self.__keyMap[1] += 1
            self.__changeFreqMap(count,data)
        except:
            self.__set(data)
            self.__minFreq += 1

    def __set(self,data):
        if(self.__size != 0):
            self.__keyMap[data] = [data,1]
            try:
                self.__addressMap[data] = self.__freqMap[1].insert(data)
            except:
                self.__freqMap[1] = DLL()
                self.__addressMap[data] = self.__freqMap[1].insert(data)

        else:
            delEle  = self.__freqMap[self.__minFreq].delete()
            if(delEle != None):
                self.__minFreq += 1
            del self.__keyMap[delEle]

    def __changeFreqMap(self,count,data):
        address = self.__addressMap(data)
        try:
            self.__freqMap[count+1].insert(data)
        except:
            self.__freqMap[count+1] = DLL()
            self.__freqMap[count+1].insert(data)
        self.__freqMap[count].delete(address)
 
if __name__ == "__main__":
    dl = DLL()
    c = []
    for i in range(10):
        if i%2 == 0:
            c.append(dl.insert(i))
        dl.insert(i)
    dl.display()

    for i in c:
        dl.delete(i)

    dl.display()

    dl.delete()
    dl.display()
    dl.delete()
    dl.display()
    dl.delete()
    dl.display()
