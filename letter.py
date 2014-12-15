
def main():
    while 1:
        letters=raw_input("input lower letters, split by space:")
        if len(letters.split())==3:
            a_is_zero(letters)
            a_is_one(letters)
        else:
            numbers = []
            for i in range(len(letters.split())):
                numbers.append([])
                for c in letters.split()[i].lower():
                    numbers[i].append(ord(c)-ord('a'))
                print numbers[i]
            print "IF A is 1"
            numbers = []
            for i in range(len(letters.split())):
                numbers.append([])
                for c in letters.split()[i].lower():
                    numbers[i].append(ord(c)-ord('a')+1)
                print numbers[i]




def a_is_zero(letters):
    print "IF a is 0:"
    numbers = []
    for i in range(len(letters.split())):
        numbers.append([])
        for c in letters.split()[i].lower():
            numbers[i].append(ord(c)-ord('a'))
        print numbers[i]

    numbers.append([])
    new_letters = []
    for i in range(len(letters.split()[0])):
        numbers[3].append(numbers[1][i]-numbers[0][i]+numbers[2][i])
        new_letters.append(chr((numbers[3][i]%26+ord('a'))))
    print "Suggetion:"
    print numbers[3]
    print new_letters
def a_is_one(letters):
    print "IF a is 1:"
    numbers = []
    for i in range(len(letters.split())):
        numbers.append([])
        for c in letters.split()[i].lower():
            numbers[i].append(ord(c)-ord('a')+1)
        print numbers[i]

    numbers.append([])
    new_letters = []
    for i in range(len(letters.split()[0])):
        numbers[3].append(numbers[1][i]-numbers[0][i]+numbers[2][i])
        new_letters.append(chr(numbers[3][i]%26+ord('a')-1))
    print "Suggetion:"
    print numbers[3]
    print new_letters


    

    


if __name__ == '__main__':
    main()
