username    =   '1a2a3a'
password    =   '4a5a6a'

if __name__ == '__main__':
    givenUsername = raw_input('Username: ')
    givenPassword = raw_input('Password: ')

    if givenUsername == username:
        if givenPassword == password:
            print 'Success!'
        else:
            print 'Password incorrect.'
    else:
        print 'Username incorrect.'
            
