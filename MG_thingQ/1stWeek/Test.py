def solution(answers):
    answer = []
    count1=count2=count3=0
    list1= [1,2,3,4,5]*20000
    list2= [2,1,2,3,2,4,2,5]*(int)(10000/8)
    list3= [3,3,1,1,2,2,4,4,5,5]*(int)(10000/10)
    
    for i in range(len(answers)):
        if answers[i]==list1[i]:
            count1+= 1
    for i in range(len(answers)):
        if answers[i]==list2[i]:
            count2+= 1
    for i in range(len(answers)):
        if answers[i]==list3[i]:
            count3+= 1
    tmp = [count1,count2,count3]
    max_tmp = max(tmp)
    for i,v in enumerate(tmp):
        if v == max_tmp : 
            answer.append(i+1)
    
    
    return answer
