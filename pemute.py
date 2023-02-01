# [a,b,c]
def permute(arr):
    if len(arr) == 0 :
        return []
    if len(arr) == 1 :
        return arr
    ret = [] 
    for i in range(len(arr)):
        s = arr[i]
        # check i+1 in range
        narr = arr[:i] + arr[i+1:]
        ps = permute(narr)
        for p in range(len(ps)):
            new = s + ps[p]
            ret.append(new)
        
    return ret

    
arr = ['a','b','c']
print(permute(arr))
a = 3 
b = a
b +=1
print(a)
    