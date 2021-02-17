# Health management system
def getdate():
    import datetime
    x = datetime.datetime.now()
    return x.strftime("%c")


def writing(nam):
    fi = open(nam, "a")
    print("What do you want to write")
    written = input()
    p = getdate()
    written = p + " " + written
    fi.write(written+"\n")
    fi.close()


def reading(naam):
    f = open(naam)
    for item in naam:
        print(f.readline(),end="")
    f.close()

def funt(id):
    print("Choose the operation\n1.read\n2.write")
    operation = int(input())
    if operation == 1:
        print("choose what you want to read from the file\ndiet\nexercise")
        choice = input()
        id = id+choice+".txt"
        reading(id)
    if operation == 2:
        print("choose which file you want to write to\ndiet\nexercise")
        choice = input()
        id = id + choice + ".txt"
        writing(id)


print("Welcome to the HEALTH MANAGEMENT SYSTEM")
print("Write the name of the customer ")
name = input()
funt(name)


