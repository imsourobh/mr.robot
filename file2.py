from pydantic import PositiveInt


with open("files.txt", "r") as fp:
    print(fp.read())

with open("file.txt", 'w') as fp:
    print(fp.read())
    