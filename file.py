def div(a, b):
    try: 
        return a/b
    except ZeroDivisionError:
        print("can't divide by zero")
    except TypeError:
        print("unsupported type. ")


print(div(10,2))
print(div('3',0))