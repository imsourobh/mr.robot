i=1
while(i!=0):
    code=list(input("Enter the code: "))
    len_code=len(code)

    code_old=''.join(code)
    code[2]=code[2].upper()
    code[len_code-4]=code[len_code-4].upper()
    code_new=''.join(code)

    if code_new[0] =='s':
        print("#",code_new[1:len_code],':',len_code-1,'.',sep='')

    elif code[0] =='c':
        print("#",code_old[1:len_code],':',len_code-1,'.',sep='')

    elif code[0]== 'n':
        print("#",code_new[1:len_code],sep='')
        
    elif code[0]== 'h':
        print(code_new[1:len_code])
        
    elif code[0]== 'e':
        print(code_old)

    else:
        print("I think you have to fix the massage!")
        i=0

        
