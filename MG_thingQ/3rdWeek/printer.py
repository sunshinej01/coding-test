def solution(priorities, location):
    answer = 0
    idx_array = []
    value_array = priorities.copy()
    for i in range(len(priorities)):
        
        idx_array.append(i)
    
    i = 0 
    while True:
        if value_array[i]<max(value_array[i+1:]):
            idx_array.append(idx_array.pop(i))
            value_array.append(value_array.pop(i)) #index를 sort하는 것에 stack 사용.
        else :
            i +=1
        
        if value_array == sorted(value_array,reverse=True):
            break
    
    return idx_array.index(location)+1
