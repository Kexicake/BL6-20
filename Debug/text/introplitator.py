
with open('text.txt', 'r') as fh: #открываем файл на чтение
            filr = fh.read() #загружаем из файла данные в словарь 

i = 0
j=0

lines = []
temp = ''
temp2 = []
fil = open('text.txt','r')
no = open('n.txt', 'w')
for line in fil:
    for n in line:
        if n != '\n':
            temp += n
        i+=1 
        j+=1
        if i == 75 or len(line)-1 == j:
            i = 0
            if len(line)-1 == j:
                temp += ' '
            temp += '\n'
            temp2.append(temp)
            temp = ''
    
    lines.append(temp2)
    temp2 = []
    j = 0
k =0

for line in lines:
    h = line
    for i in line:
        if h[0] == i:
            temp = i
        else:
            temp2 = i          
            if temp[len(temp)-2] != ' ' and i[0] != ' ':
                temp3 = temp[::-1]
                temp1 = temp3[temp3.find(' '):]
                temp3 = temp3[:temp3.find(' ')]
                temp1 = temp1[::-1] + '\n'
                #temp = temp[::-1]
                i = i[::-1]
                i+=temp3[1::]
                #i = i[1::]
                i = i[::-1]
                lines[j][k] = i
                lines[j][k-1] = temp1
            temp = temp2
        k +=1
    for m in range(k,4):
        lines[j].append('\n')
    k=0
    j+=1

fil.close()

    
fil = open('rd.txt','w')
fild = open('rid.txt','w')
for i in lines:
    for j in i:
        for m in j:
            if m == 'а':
                fil.write('f')
            if m == 'б':
                fil.write('@')
            if m == 'в':
                fil.write('d')
            if m == 'г':
                fil.write('u')
            if m == 'д':
                fil.write('l')
            if m == 'е':
                fil.write('t')
            if m == 'ё':
                fil.write('`')
            if m == 'ж':
                fil.write(';')
            if m == 'з':
                fil.write('p')
            if m == 'и':
                fil.write('b')
            if m == 'й':
                fil.write('q')
            if m == 'к':
                fil.write('r')
            if m == 'л':
                fil.write('k')
            if m == 'м':
                fil.write('v')
            if m == 'о':
                fil.write('j')
            if m == 'п':
                fil.write('g')
            if m == 'р':
                fil.write('h')
            if m == 'с':
                fil.write('c')
            if m == 'т':
                fil.write('n')
            if m == 'у':
                fil.write('e')
            if m == 'ф':
                fil.write('a')
            if m == 'х':
                fil.write('*')
            if m == 'ц':
                fil.write('w')
            if m == 'ч':
                fil.write('x')
            if m == 'ш':
                fil.write('i')
            if m == 'щ':
                fil.write('o')
            if m == 'ъ':
                fil.write('_')
            if m == 'ы':
                fil.write('s')
            if m == 'ь':
                fil.write('m')
            if m == 'э':
                fil.write("'")
            if m == 'ю':
                fil.write('#')
            if m == 'я':
                fil.write('z')
            if m == 'А':
                fil.write('F')
            if m == 'Б':
                fil.write('$')
            if m == 'В':
                fil.write('D')
            if m == 'Г':
                fil.write('U')
            if m == 'Д':
                fil.write('L')
            if m == 'Е':
                fil.write('T')
            if m == 'Ё':
                fil.write('~')
            if m == 'Ж':
                fil.write('^')
            if m == 'З':
                fil.write('P')
            if m == 'И':
                fil.write('B')
            if m == 'Й':
                fil.write('Q')
            if m == 'К':
                fil.write('R')
            if m == 'Л':
                fil.write('K')
            if m == 'М':
                fil.write('V')
            if m == 'О':
                fil.write('J')
            if m == 'П':
                fil.write('G')
            if m == 'Р':
                fil.write('H')
            if m == 'С':
                fil.write('C')
            if m == 'Т':
                fil.write('N')
            if m == 'У':
                fil.write('E')
            if m == 'Ф':
                fil.write('A')
            if m == 'Х':
                fil.write('{')
            if m == 'Ц':
                fil.write('W')
            if m == 'Ч':
                fil.write('X')
            if m == 'Ш':
                fil.write('I')
            if m == 'Щ':
                fil.write('O')
            if m == 'Ъ':
                fil.write('}')
            if m == 'Ы':
                fil.write('S')
            if m == 'Ь':
                fil.write('M')
            if m == 'Э':
                fil.write('"')
            if m == 'Ю':
                fil.write('%')
            if m == 'Я':
                fil.write('Z')
            if m == 'н':
                fil.write('y') 
            if m == 'Н':
                fil.write('Y')
            if m == ' ' or m == '.' or m == ',' or m == ':' or m == '!' or m == '?' or m == ')' or m == '(' or m == '\n' or m == '1' or m == '2' or m == '3' or m == '4' or m == '5' or m == '6' or m == '7' or m == '8' or m == '9' or m == '0':
                fil.write(m) 
fil.close()
fild.close()