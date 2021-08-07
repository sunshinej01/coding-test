def solution(array, commands):
    answer = []
    def cutarray(arr, a,b,c):
        arr = arr[a-1:b]
        arr.sort()
        return arr[c-1]
    for a,b,c in commands:
        answer.append(cutarray(array,a,b,c))
    
    return answer
