"""
    there are some bugs in the code.
    For correct code check-out rough.py .
"""



arr=[3,4,2,1,5]
temp = []

def mergesort(arr):  
    
    if len(arr)>1:
        mid = int(len(arr)/2)
        L = arr[:mid]
        R = arr[mid:]
        mergesort(L)
        mergesort(R)
        print(L,R)
        merge(L,R,arr)
    else:
        return

def merge(left,right,arr):
    i=0
    j=0
    k=0
    while(i<len(left) and j<len(right)):
        if left[i]<right[i]:
            arr[k] = left[i]
            i = i+1
        else:
            arr[k] = right[j]
            j = j+1
        k=k+1
    
    while(i<len(left)):
        arr[k] = left[i]
        i = i+1
        k = k+1
  
    while(j<len(right)):
        arr[k] = right[j]
        j = j+1
        k = k+1
    
 
    

        
        
mergesort(arr)
print(arr)
