import math
def solution(progresses, speeds):
    answer = []
    
    first_stack =0
    
    working_days = []
    
    for i in range(len(progresses)) :
        
        working_days.append(math.ceil((100- progresses[i])/speeds[i])) #소수점 올림.
        
    for i in range(len(progresses)) :
        if working_days[i]>working_days[first_stack]:
            answer.append(i-first_stack)
            first_stack=i
         
    answer.append(len(progresses)-first_stack)
    
    
    return answer
