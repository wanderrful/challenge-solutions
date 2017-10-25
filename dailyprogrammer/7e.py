d = {
    '.-':'A',
    '-...':'B',
    '-.-.':'C',
    '-..':'D',
    '.':'E',
    '..-.':'F',
    '--.':'G',
    '....':'H',
    '..':'I',
    '.---':'J',
    '-.-':'K',
    '.-..':'L',
    '--':'M',
    '-.':'N',
    '---':'O',
    '.--.':'P',
    '--.-':'Q',
    '.-.':'R',
    '...':'S',
    '-':'T',
    '..-':'U',
    '...-':'V',
    '.--':'W',
    '-..-':'X',
    '-.--':'Y',
    '--..':'Z'
    }

def toMorse(s):
    answer = ''
    t = s.split(' / ')
    for i in t:
        answer += d[t[i]]
    return answer

def toMorse(s):
    answer = ''
    words = s.split(' / ') #break up the input s into words
    for i in words: #for each word
        letters = i.split() #break up the given word i into its letters
        for j in letters: #for each letter in a given word
            answer += d[j] #translate the letter
        answer += ' '
    return answer

print toMorse('.... . .-.. .-.. --- / -.. .- .. .-.. -.-- / .--. .-. --- --. .-. .- -- -- . .-. / --. --- --- -.. / .-.. ..- -.-. -.- / --- -. / - .... . / -.-. .... .- .-.. .-.. . -. --. . ... / - --- -.. .- -.--')
