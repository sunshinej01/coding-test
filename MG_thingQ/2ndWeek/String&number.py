def solution(s):# 망한 코드
    answer = 0
    
    num_idx = 0
    total_list = []
    total_str = ''
    for i in range(len(s)):
        
        if s[i:i+3] == 'one':
           # total_list.append(1)
            i +=3
            total_str =total_str+str(1)
        elif s[i:i+3] == 'two':
           # total_list.append(2)
            i +=3
            total_str =total_str+str(2)
        elif s[i:i+3] == 'six':
           # total_list.append(6)
            i +=3
            total_str =total_str+str(6)
        elif s[i:i+3] == 'zero':
           # total_list.append(0)
            i +=4
            total_str =total_str+str(0)

        elif s[i:i+4] == 'four':
          #  total_list.append(4)
            i +=4
            total_str =total_str+str(4)

        elif s[i:i+4] == 'five':
          #  total_list.append(5)
            i +=4
            total_str =total_str+str(5)

        elif s[i:i+4] == 'nine':
           # total_list.append(9)
            i +=4
            total_str =total_str+str(9)

        elif s[i:i+5] == 'three':
           # total_list.append(3)
            i +=5
            total_str =total_str+str(3)

        elif s[i:i+5] == 'seven':
          #  total_list.append(7)
            i +=5
            total_str =total_str+str(7)

        elif s[i:i+5] == 'eight':
           # total_list.append(8)
            i +=5
            total_str =total_str+str(8)
        else :   
        #elif s[i]>'a' or s[i]<'z':
           # total_list.append(s[num_idx])
            total_str = total_str+str(s[i])
            i += 1
        
       # s=''.join(total_list)
        answer = int(total_str)
    
    
    
    return answer
