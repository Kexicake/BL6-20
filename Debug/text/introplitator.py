with open('text.txt', 'r', encoding='utf-8') as fh: #открываем файл на чтение
            filr = fh.read() #загружаем из файла данные в словарь 

fil = open('rid.txt','w')
for i in filr:
    if i == 'а':
        fil.write('f')
    if i == 'б':
        fil.write('@')
    if i == 'в':
        fil.write('d')
    if i == 'г':
        fil.write('u')
    if i == 'д':
        fil.write('l')
    if i == 'е':
        fil.write('t')
    if i == 'ё':
        fil.write('`')
    if i == 'ж':
        fil.write(';')
    if i == 'з':
        fil.write('p')
    if i == 'и':
        fil.write('b')
    if i == 'й':
        fil.write('q')
    if i == 'к':
        fil.write('r')
    if i == 'л':
        fil.write('k')
    if i == 'м':
        fil.write('v')
    if i == 'о':
        fil.write('j')
    if i == 'п':
        fil.write('g')
    if i == 'р':
        fil.write('h')
    if i == 'с':
        fil.write('c')
    if i == 'т':
        fil.write('n')
    if i == 'у':
        fil.write('e')
    if i == 'ф':
        fil.write('a')
    if i == 'х':
        fil.write('[')
    if i == 'ц':
        fil.write('w')
    if i == 'ч':
        fil.write('x')
    if i == 'ш':
        fil.write('i')
    if i == 'щ':
        fil.write('o')
    if i == 'ъ':
        fil.write(']')
    if i == 'ы':
        fil.write('s')
    if i == 'ь':
        fil.write('m')
    if i == 'э':
        fil.write("'")
    if i == 'ю':
        fil.write('#')
    if i == 'я':
        fil.write('z')
    if i == 'А':
        fil.write('F')
    if i == 'Б':
        fil.write('$')
    if i == 'В':
        fil.write('D')
    if i == 'Г':
        fil.write('U')
    if i == 'Д':
        fil.write('L')
    if i == 'Е':
        fil.write('T')
    if i == 'Ё':
        fil.write('~')
    if i == 'Ж':
        fil.write('^')
    if i == 'З':
        fil.write('P')
    if i == 'И':
        fil.write('B')
    if i == 'Й':
        fil.write('Q')
    if i == 'К':
        fil.write('R')
    if i == 'Л':
        fil.write('K')
    if i == 'М':
        fil.write('V')
    if i == 'О':
        fil.write('J')
    if i == 'П':
        fil.write('G')
    if i == 'Р':
        fil.write('H')
    if i == 'С':
        fil.write('C')
    if i == 'Т':
        fil.write('N')
    if i == 'У':
        fil.write('E')
    if i == 'Ф':
        fil.write('A')
    if i == 'Х':
        fil.write('{')
    if i == 'Ц':
        fil.write('W')
    if i == 'Ч':
        fil.write('X')
    if i == 'Ш':
        fil.write('I')
    if i == 'Щ':
        fil.write('O')
    if i == 'Ъ':
        fil.write('}')
    if i == 'Ы':
        fil.write('S')
    if i == 'Ь':
        fil.write('M')
    if i == 'Э':
        fil.write('"')
    if i == 'Ю':
        fil.write('%')
    if i == 'Я':
        fil.write('Z')
    if i == 'н':
        fil.write('y') 
    if i == 'Н':
        fil.write('Y')
    if i == ' ' or i == '.' or i == ',' or i == ':' or i == '!' or i == '?' or i == ')' or i == '(' or i == '\n' or i == '1' or i == '2' or i == '3' or i == '4' or i == '5' or i == '6' or i == '7' or i == '8' or i == '9' or i == '0':
        fil.write(i) 
fil.close()
    