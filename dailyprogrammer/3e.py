cipher = {

    'a':'b',
    'b':'c',
    'c':'d',
    'd':'e',
    'e':'f',
    'f':'g',
    'g':'h',
    'h':'i',
    'i':'j',
    'j':'k',
    'k':'l',
    'l':'m',
    'm':'n',
    'n':'o',
    'o':'p',
    'p':'q',
    'q':'r',
    'r':'s',
    's':'t',
    't':'u',
    'u':'v',
    'v':'w',
    'w':'x',
    'x':'y',
    'y':'z',
    'z':'a'

    }


if __name__ == '__main__':
    message = raw_input('please input message to encode: ')
    result = ''
    for i in range(0,len(message)):
        result += cipher[message[i]]
    print 'your encoded message is: ' + result
