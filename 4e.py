from random import randint

if __name__ == '__main__':
    #query user
    userSays = raw_input('how many characters do you want the password to be?')    
    
    #create password
    result = ''
    pwlength = 0
    for i in range(0,len(userSays)):
        pwlength += int(userSays[i])* (10**(len(userSays)-i-1))

    for j in range(0,pwlength):
        result += chr(randint(33,126))
    
    #output created password
    print result
